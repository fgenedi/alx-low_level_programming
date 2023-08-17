#include "main.h"
#include <stdio.h>
/**
 * print_line - entry point
 *
 * Description: Prints straight line
 *
 * @n: how many _ printed
 * Return: void
 */
void print_line(int n)
{
int x;
for(x = 0; x < n; x++)
{
_putchar(95);
}
_putchar(10);
}
