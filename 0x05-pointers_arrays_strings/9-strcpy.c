#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n of array
 * @dest: array
 * @src: num to print
 * Return: char 
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != 0)
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = 0;
return (dest);
}
