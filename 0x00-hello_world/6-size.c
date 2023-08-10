#include <stdio.h>
/**
 * main - main function
 * Description: This program demonstrates the use of the sizeof function.
 * Return: Always 0 if successful.
 */
int main(void) 
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
