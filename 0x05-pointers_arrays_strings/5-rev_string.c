#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * @s: string
 * Return: void.
 */
void rev_string(char *s)
{
int l;
l = _strlen(*s);
char r[l];
while(1)
{
if (*s == 0)
{
return *r;
}
r[l] = *s;
s++;
l--;
}
}
