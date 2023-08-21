#include "main.h"
#include <stdio.h>
/**
 * _strlen - gets string length
 *
 * @s: string
 * Return: int which is string length.
 */
int _strlen(char *s)
{
int r;
r = 0;
while(1)
{
if(*s == 0)
{
return (r);
}
r++;
s++;
}
}
