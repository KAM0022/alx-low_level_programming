#include "main.h"

/**
 * _strncpy - function in C that copies a string including
 * the terminating null byte, using the most an inputted number of bytes
 * If the source string length is less than the max byte number.
 * the remainder of the destination string is filled with null bytes
 * works identically as the standard library function 'strncpy'
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
