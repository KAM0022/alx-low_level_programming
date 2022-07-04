#include<stdio.h>
/**
* main - prints all the numbers of base 16 in lowcase
*
* Return: Always 0.
*/
int main(void)
{
int a;
char b;
for (a = 0; a <= 16; a++)
putchar((a % 10) + '0');
for (b = 'b'; b <= 'c'; b++)
putchar(a);
putchar('\n');
return (0);
}
