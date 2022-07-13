#include "main.h"

/**
 * largers_number - prints the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largers number
 */

int largers_number(int a, int b, int c)
{
int largest;

if (a > b)
{
if (a > c)
{
largest = a;
}
else
{
largest = c;
}
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
