#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string
 *
 * @str: string
 * Return: void.
 */
void _puts(char *str)
{
while (1)
{
if (*str == 0)
{
putchar (10);
return;
}
putchar (*str);
str++;
}
}
