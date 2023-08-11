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
while (z >= a)
{
putchar(z);
z--;
}
putchar(n);
return (0);
}
