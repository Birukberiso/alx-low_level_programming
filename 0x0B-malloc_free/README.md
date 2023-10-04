 - Memory Allocation and Manipulation

This repository contains a collection of C programs that demonstrate memory allocation and manipulation using `malloc` and `free` functions. These tasks cover a range of memory-related operations.

## Task List

### [Task 0: Float like a butterfly, sting like a bee](0-create_array.c)

- Create an array of characters and initialize it with a specific character.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is 0.
- Returns a pointer to the array or `NULL` on failure.

### [Task 1: The woman who has no imagination has no wings](1-strdup.c)

- Duplicate a string in memory and return a pointer to the duplicate.
- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str` is `NULL`.
- Memory is allocated with `malloc` and can be freed with `free`.
- Returns a pointer to the duplicated string or `NULL` on failure.

### [Task 2: He who is not courageous enough to take risks will accomplish nothing in life](2-str_concat.c)

- Concatenate two strings and return a newly allocated string.
- Prototype: `char *str_concat(char *s1, char *s2);`
- Returns `NULL` on failure.
- Treats `NULL` as an empty string.

### [Task 3: If you even dream of beating me, you'd better wake up and apologize](3-alloc_grid.c)

- Allocate memory for a 2-dimensional array of integers and initialize elements to 0.
- Prototype: `int **alloc_grid(int width, int height);`
- Returns `NULL` on failure or if `width` or `height` is 0 or negative.

### [Task 4: It's not bragging if you can back it up](4-free_grid.c)

- Free memory allocated by the `alloc_grid` function.
- Prototype: `void free_grid(int **grid, int height);`
- Ensure that `alloc-grid.c` compiles correctly.

### [Task 5: It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](100-argstostr.c)

- Concatenate all program arguments into a single string.
- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac` is 0 or `av` is `NULL`.
- Returns a pointer to the concatenated string with newline separators.

### [Task 6: I will show you how great I am](101-strtow.c)

- Split a string into words and return an array of strings.
- Prototype: `char **strtow(char *str);`
- Returns `NULL` if `str` is `NULL` or an empty string.
- The last element of the returned array is `NULL`.
- Words are separated by spaces.

