#include "main.h"
#include <stdio.h>
/**
 * _strcat - concat two strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int len;
int i;
int j;
i = 0;
len = 0;
while (dest[i] != 0)
{
len++;
i++;
}
i = 0;
while (src[i] != 0)
{
len++;
i++;
}
char r[len];
i = 0;
while (dest[i] != 0)
{
r[i] = dest[i];
i++;
}
j = 0;
while (src[j] != 0)
{
r[i] = src[j];
i++;
j++;
}
r[i] = 0;
return &r;
}
