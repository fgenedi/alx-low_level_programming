#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - prints a string followed by a new line
* @s: 2D array
* Return: void
*/
void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar(10);
return;
}
putchar(*s);
s++;
_puts_recursion(s);
}
