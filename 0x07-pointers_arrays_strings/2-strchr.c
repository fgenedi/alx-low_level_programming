#include "main.h"
/**
 *_strchr - locate char in a string
 *@s: string
 *@c: character
 *Return: returns pointer of char or NULL
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != 0)
{
if (s[i] == c)
{
s = s + i;
return (s);
}
i++;
}
return (0);
}
