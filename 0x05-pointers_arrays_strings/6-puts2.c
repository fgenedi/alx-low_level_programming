#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character
 * @str: string
 */
void puts2(char *str)
{
int x;
x = 1;
while (1)
{
if (*str == 0)
{
putchar (10);
return;
}
if (x == 1)
{
putchar (*str);
x = 0;
}
else
{
x = 1;
}
str++;
}
}
