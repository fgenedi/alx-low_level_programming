#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks sign of n
 * @n: the character to check
 * Return: 1 pos, -1 if neg, 0 if zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
else if (n < 0)
{
_putchar (45);
return (-1);
}
else
{
_putchar (48);
return (0);
}
}
