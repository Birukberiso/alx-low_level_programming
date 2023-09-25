#include "main.h"

/**
* _memset - fill a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: pointer to the modified memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
char *dest = s; // Store the original pointer for returning later
while (n > 0)
{
*s++ = b; // Set the current byte to 'b' and move to the next byte
n--;
}
return dest; // Return the original pointer to the start of the memory block
}
