#include "main.h"
/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int row;
int column;
row = 0;
column = 0;
for (; row < 8; row++)
{
for (; column < 8; column++)
_putchar(a[row][column]);
_putchar(10);
}
}
