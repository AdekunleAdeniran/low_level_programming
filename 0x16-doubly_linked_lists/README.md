# 0x16. C - Doubly linked lists

## What you should learn from this project
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

What is a doubly linked list
How to use doubly linked lists
Start to look for the right source of information without too much help

## Exercises

0. Print list
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes

1. List length

Write a function that returns the number of elements in a linked dlistint_t list.
Prototype: size_t dlistint_len(const dlistint_t *h);

2. Add node
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

## USAGE
Compile the programs with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

## AUTHOR
Adekunle Adeniran