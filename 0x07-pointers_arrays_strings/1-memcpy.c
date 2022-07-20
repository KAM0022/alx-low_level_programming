#include "main.h"

/**
 * _memcpy - function that fills memory with another buffer
 * @dest: the source string
 * @src: the string for filling
 * @n: the length of the buffer.
 * Return: returns a new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
