#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for(i = 0; i < 10; i++)
{
if(i != 2 && i != 4)
{
_putchar(i);
}
}
_putchar(10);
}
