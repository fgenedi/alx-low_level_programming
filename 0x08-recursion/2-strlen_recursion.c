#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - prints a string in reverse
* @s: 2D array
* Return: string length
*/
int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}
