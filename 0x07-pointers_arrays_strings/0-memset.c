#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: source string
 * @b: the constant byte for filling
 * @n: length of the buffer
 * Return: returns a new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
