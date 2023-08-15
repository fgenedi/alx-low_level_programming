#include <stdio.h>
#include "main.h"
/**
 * int _islower - a function
 * Description: checks if character is lowercase
 * Return: 1 if lowercase and 0 if capital
 */
int _islower(int c)
{
if ( c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
