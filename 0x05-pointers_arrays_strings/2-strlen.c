#include "main.h"
#include <string.h>

/**
 * _strlen - a function to get the length of a string
 * @s: string pointer to pass to this function
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len = len + 1;
	}
	return (len);
}

