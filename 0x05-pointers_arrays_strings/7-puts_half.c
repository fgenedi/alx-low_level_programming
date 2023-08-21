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
half = length / 2;
if (half % 2 == 1)
{
half++;
}
while (half < length)
{
putchar(str[half]);
half++;
}
putchar(10);
}
