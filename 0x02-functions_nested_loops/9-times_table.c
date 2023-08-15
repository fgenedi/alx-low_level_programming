#include "main.h"
/**
 * times_table - It is a table multiplication
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (b == 0)
{
_putchar(c + 48);
}
else if (c <= 9)
{
_putchar(32);
_putchar(c + 48);
}
else
{
_putchar((c / 10) + 48);
_putchar((c % 10) + 48);
}
if (b != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar(10);
}
}
