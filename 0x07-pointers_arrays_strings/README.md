C-even more pointers and arrays
Description

This project consists of a collection of C functions that perform various operations on strings, arrays, and pointers. Each function is implemented to serve a specific purpose and is explained in detail below.

Functions

0-memset.c

	•	Function Name: _memset
	•	Description: Fills a block of memory with a specific value.
	•	Arguments:
	•	s: Pointer to the starting address of memory to be filled.
	•	b: The desired value to fill the memory.
	•	n: Number of bytes to be changed.
	•	Return Value: Pointer to the modified memory block.

1-memcpy.c

	•	Function Name: _memcpy
	•	Description: Copies a specified number of bytes from one memory location to another.
	•	Arguments:
	•	dest: Memory where data is stored.
	•	src: Memory where data is copied from.
	•	n: Number of bytes to be copied.
	•	Return Value: Pointer to the modified destination memory block.

2-strchr.c

	•	Function Name: _strchr
	•	Description: Searches for the first occurrence of a character in a given string and returns a pointer to its location.
	•	Arguments:
	•	s: Input string to search.
	•	c: Target character to find.
	•	Return Value: Pointer to the first occurrence of c in s, or a null pointer if not found.

3-strspn.c

	•	Function Name: _strspn
	•	Description: Calculates the length of the initial segment of a string that only consists of characters present in another string.
	•	Arguments:
	•	s: Input string to check.
	•	accept: String containing characters to match.
	•	Return Value: Length of the initial segment of s that matches characters in accept.

4-strpbrk.c

	•	Function Name: _strpbrk
	•	Description: Searches a string for any of a set of specified characters.
	•	Arguments:
	•	s: Input string to search.
	•	accept: String containing characters to search for.
	•	Return Value: Pointer to the first occurrence of any character in accept in s, or a null pointer if none are found.

5-strstr.c

	•	Function Name: _strstr
	•	Description: Searches for the first occurrence of a substring in a string.
	•	Arguments:
	•	haystack: Pointer to the string to be searched.
	•	needle: Pointer to the substring to search for.
	•	Return Value: Pointer to the first occurrence of needle in haystack, or a null pointer if not found.

7-print_chessboard.c

	•	Function Name: print_chessboard
	•	Description: Prints a chessboard represented as a 2D array of characters.
	•	Arguments:
	•	a: Pointer to a 2D array representing the chessboard.
	•	Return Value: None (void).

8-print_diagsums.c

	•	Function Name: print_diagsums
	•	Description: Calculates and prints the sums of the diagonals in a 2D array.
	•	Arguments:
	•	a: Pointer to a 2D array of integers.
	•	size: Size of the array.
	•	Return Value: None (void).

100-set_string.c

	•	Function Name: set_string
	•	Description: Sets the value of a pointer to the address of another pointer.
	•	Arguments:
	•	**s: Pointer to a pointer whose value will be set.
	•	*to: Pointer whose address will be assigned to **s.
	•	Return Value: None (void).

Usage

You can include these functions in your C projects by including the appropriate header files and calling them as needed.

For example:

#include "main.h"

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;

    _strchr(ptr, 'W'); // Example usage of _strchr function
    // ...

    return 0;
}

Credits

This project was created by Birukberiso
