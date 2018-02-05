# 0x06. C - Even more pointers, arrays and strings

What are pointers to pointers and how to use them

What are multidimensional arrays and how to use them

What are the most common C standard library functions to manipulate strings

## Code Projects
0. memset
Write a function that fills memory with a constant byte.
Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to
by s with the constant byte b
Returns a pointer to the memory area s

1. memcpy
Write a function that copies memory area.
Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest

2. strchr
Write a function that locates a character in a string.
Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or
NULL if the character is not found

3. strspn
Write a function that gets the length of a prefix substring.
Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist
only of bytes from accept

4. strpbrk
Write a function that searches a string for any of a set of bytes.
Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of
the bytes in the string acceptReturns a pointer to the byte in s that
matches one of the bytes in accept, or NULL if no such byte is found