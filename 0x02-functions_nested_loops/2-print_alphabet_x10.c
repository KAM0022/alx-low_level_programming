#include "main.h"
/**
* main - print function that prints 10 times the alphabet, in lowercase, followed by a new line.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');:
}
}