#include <stdio.h>
/**
 * main - main function
 * Description: prints alphabet
 * Return: 0 if success
 */
int main(void)
{
char a;
char z;
char n;
n = 10;
a = 97;
z = 122;
while (a <= z)
{
if (a != 101 || a != 113)
putchar(a);
a++;
}
putchar(n);
return (0);
}
