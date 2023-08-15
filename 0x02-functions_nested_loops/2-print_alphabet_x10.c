#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function
 * Description: prints alphabet
 * Return: 0 if success
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
i++;
}
putchar(n);
}
