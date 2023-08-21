#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps 2 ints
 *
 * @a: int 1
 * @b : int 2
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
