#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n of array
 * @a: array
 * @n : num to print
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while ( i < n-1)
{
putchar (a[i]);
putchar (44);
putchar (32);
i++;
}
putchar (a[i]);
putchar (10);
}
