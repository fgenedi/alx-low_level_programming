#include "main.h"
/**
 * print_last_digit - ultimo digito de un numero
 * @n: entry point
 * Return: return last digit
 **/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
else
{
_putchar(n + 48);
}
return (n);
}
