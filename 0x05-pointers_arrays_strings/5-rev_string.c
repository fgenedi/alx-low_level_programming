#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string in place
 *
 * @s: string
 * Return: void.
 */
void rev_string(char *s)
{
    int l = _strlen(s);
    char temp;
    
    for (int i = 0; i < l / 2; i++) {
        temp = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = temp;
    }
}
