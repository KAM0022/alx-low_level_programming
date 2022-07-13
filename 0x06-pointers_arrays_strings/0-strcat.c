#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to 
 * the end of the string pointed to by @dest
 * @src: string that will be appended
 * @dest: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	
	for (index = 0, src[index], index++);

	return (dest);
}
