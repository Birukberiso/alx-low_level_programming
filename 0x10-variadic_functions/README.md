# Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions allow you to work with a variable number of arguments in C.

## Contents

1. [sum_them_all](#sum_them_all)
2. [print_numbers](#print_numbers)
3. [print_strings](#print_strings)
4. [print_all](#print_all)

## Prerequisites

Before running these programs, make sure you have GCC installed on your system.

## Installation

To compile the programs, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d

Usage

sum_them_all

The sum_them_all function takes a variable number of integer arguments and returns their sum.

Example:

int sum;

sum = sum_them_all(2, 98, 1024);
printf("%d\n", sum);
sum = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", sum);

print_numbers

The print_numbers function prints a list of numbers, separated by a specified separator.

Example:

print_numbers(", ", 4, 0, 98, -1024, 402);

print_strings

The print_strings function prints a list of strings, separated by a specified separator. If a string is NULL, it prints “(nil)”.

Example:

print_strings(", ", 2, "Jay", "Django");

print_all

The print_all function prints a list of items based on the format provided. It supports the following format specifiers:

	•	c: char
	•	i: integer
	•	f: float
	•	s: string (if NULL, it prints “(nil)”)

Example:

print_all("ceis", 'B', 3, "stSchool");

Author Birukberiso