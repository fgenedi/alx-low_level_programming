#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function
 * Description: prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char a;
char z;
char n;
int i;
i = 1;
n = 10;
a = 97;
z = 122;
while (i <= 10)
{
while (a <= z)
{
putchar(a);
a++;
}
putchar(n);
i++;
}
}
