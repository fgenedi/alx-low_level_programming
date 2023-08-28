#include "main.h"
/**
 * _memset - sets memory are to a char
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
s[i] = b;
}
return (s);
}
