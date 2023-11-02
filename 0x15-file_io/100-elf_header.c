#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* for memcmp */
#include <fcntl.h> /* for open */
#include <unistd.h> /* for read, close */

void check_elf(Elf64_Ehdr *header)
{
	if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}
}

void print_elf_header(Elf64_Ehdr *header)
{
	const char *class;
	const char *data;
	const char *os_abi;
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	class = header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64";
	printf("  Class: %s\n", class);

	data = header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" :
		"2's complement, big endian";
	printf("  Data: %s\n", data);

	os_abi = header->e_ident[EI_OSABI] == ELFOSABI_NONE ?
		"UNIX - System V" :
		(header->e_ident[EI_OSABI] == ELFOSABI_LINUX ?
		"UNIX - Linux" : "unknown");
	printf("  OS/ABI: %s\n", os_abi);

	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type: %s\n",
		header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		(header->e_type == ET_DYN ? "DYN (Shared object file)" : "unknown"));

	printf("  Entry point address: %lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
		exit(64);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("read");
		exit(98);
	}

	check_elf(&header);

	print_elf_header(&header);

	close(fd);

	return (EXIT_SUCCESS); /* use EXIT_SUCCESS instead of literal value */
}

