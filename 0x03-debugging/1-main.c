#include <stdio.h>

/**
* main - prints numbers from 0 to 9
* Return: 0
*/
int main(void)
{
int i;
printf("Printing numbers 0 to 9:\n");
i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
printf("\nLoop completed!\n");
return (0);
}
