#include "main.h"
/**
 * jack_bauer - Count from 00:00 to 23:59
 * @void: This is the entry
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b;
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar((a / 10) + 48);
_putchar((a % 10) + 48);
_putchar(58);
_putchar((b / 10) + 48);
_putchar((b % 10) + 48);
_putchar(10);
}
}
}
