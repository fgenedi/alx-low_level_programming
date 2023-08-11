#include <stdio.h>
/**
 * main - main function
 * Description: prints alphabet lowercase then uppercase
 * Return: 0 if success
 */
int main(void)
{
char lowercase;
char uppercase;
char newline;
lowercase = 97;
uppercase = 65;
newline = 10;
while (lowercase <= 122)
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 90)
{
putchar(uppercase);
uppercase++;
}
putchar(newline);
return (0);
}
