#include <stdio.h>
/**
 * main - main function
 * Description: prints first ten numbers
 * Return: 0 if success
 */
int main(void)
{
int a;
char n;
n = 10;
a = 0;
while (a < 10)
{
printf("%d", a);
a++;
}
putchar(n);
return (0);
}
