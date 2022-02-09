#include "main.h"

/**
 *print_diagonal - Write a diagonal
 *
 *@n: Is a variable
 *
 *_putchar: Is a lines and spaces
 *
 */

void print_diagonal(int n)
{
	int num;
	int space;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
		{
			for (space = 1; space < num; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
