#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - entry point
 *
 * Description: Prints straight line
 *
 * @n: how many / printed
 * Return: void
 */
void print_diagonal(int n)
{
int x;
int i;
for(x = 0; x < n; x++)
{
for(i = x; i < n; i++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
}
