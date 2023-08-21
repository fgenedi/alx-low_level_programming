#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: string
 * Return: void.
 */
void print_rev(char *s)
{
char *temp;
temp = s;
while (1)
{
if (*s == 0)
{
while (s != temp)
{
putchar (10);
s--;
}
return;
}
s++;
}
}
