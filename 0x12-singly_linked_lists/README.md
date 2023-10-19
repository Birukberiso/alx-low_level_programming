# 0x12. C - Singly Linked Lists

## Table of Contents
1. [Description](#description)
2. [Concepts](#concepts)
3. [Resources](#resources)
4. [Learning Objectives](#learning-objectives)
5. [Copyright - Plagiarism](#copyright-plagiarism)
6. [Requirements](#requirements)
7. [Tasks](#tasks)

## Description

This project is about implementing singly linked lists in C. It includes several tasks where you'll create functions for handling linked lists.

## Concepts

For this project, you're expected to understand the following concepts:
- Data Structures

## Resources

To complete this project, you can refer to the following resources:
- Linked Lists
- Google
- Youtube

## Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:
- When and why to use linked lists versus arrays
- How to build and use linked lists

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks yourself to meet the learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do, it won’t be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

### More Info

Please use this data structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Tasks

 1. Print list
 • Write a function that prints all the elements of a list_t list.
 • Prototype: size_t print_list(const list_t *h);
 • Return: the number of nodes
 • Format: see example
 • If str is NULL, print [0] (nil)
 • You are allowed to use printf
 2. List length
 • Write a function that returns the number of elements in a list_t list.
 • Prototype: size_t list_len(const list_t *h);
 3. Add node
 • Write a function that adds a new node at the beginning of a list_t list.
 • Prototype: list_t *add_node(list_t **head, const char *str);
 • Return: the address of the new element, or NULL if it failed
 • str needs to be duplicated
 • You are allowed to use strdup
 4. Add node at the end
 • Write a function that adds a new node at the end of a list_t list.
 • Prototype: list_t *add_node_end(list_t **head, const char *str);
 • Return: the address of the new element, or NULL if it failed
 • str needs to be duplicated
 • You are allowed to use strdup
 5. Free list
 • Write a function that frees a list_t list.
 • Prototype: void free_list(list_t *head);
 6. The Hare and the Tortoise
 • Write a function that prints “You’re beat! and yet, you must allow,\nI bore my house upon my back!\n” before the main function is executed.
 • You are allowed to use the printf function
 7. Real programmers can write assembly code in any language
 • Write a 64-bit program in assembly that prints “Hello, Holberton,” followed by a new line.
