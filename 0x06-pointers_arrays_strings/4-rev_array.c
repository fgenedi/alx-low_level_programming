#include "main.h"
/**
 *reverse_array - reverses an array.
 *@a: array.
 *@n: array length.
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int temp;
i = 0;
j = n;
for (; i < n/2; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
