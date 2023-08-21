#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints second of a string
 * @str: string
 */
void puts_half(char *str)
{
int length, half;
length = 0;
while (str[length] != 0)
{
length++;
}
if (length % 2 == 1)
{
half = (length - 1) / 2;
}
else
{
half = length / 2;
}
while (half < length)
{
putchar(str[half]);
half++;
}
putchar(10);
}
