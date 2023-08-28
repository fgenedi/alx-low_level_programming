#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: pointer to start of mem area
 * @b: char to fill memory
 * @n: number of bytes to fill
 * Return: pointer to start.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
for (; i < n; i++)
{
*s = b;
s++;
}
return (s);
}
