#include "main.h"

/**
 *print_chessboard - print a chessboar
 *@a: The chessboard to be print
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; a[row][8]; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
