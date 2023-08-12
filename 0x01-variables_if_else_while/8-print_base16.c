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
char start;
char zero;
a = 0;
n = 10;
start = 97;
zero = 48;
while (a < 10)
{
putchar(a + zero);
a++;
}
while (start < 103)
{
putchar(start);
start++;
}
putchar(n);
return (0);
}
