#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbers.
*
* Return: Always 0.
*/
int main(void)
{
int b;
for (b = 0; b <= 9; b++)
{
putchar((b % 10) + '0');
if (b == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}