#include <stdio.h>

int main(void)
{
unsigned int fib1 = 1; // Initial Fibonacci number
unsigned int fib2 = 2; // Second Fibonacci number
printf("%u, %u", fib1, fib2); // Print the first two Fibonacci numbers
for (int i = 2; i < 98; i++)
{
unsigned int temp = fib1 + fib2; // Calculate the next Fibonacci number
printf(", %u", temp); // Print the next Fibonacci number
fib1 = fib2; // Update the first previous Fibonacci number
fib2 = temp; // Update the second previous Fibonacci number
}
printf("\n");
return 0;
}
