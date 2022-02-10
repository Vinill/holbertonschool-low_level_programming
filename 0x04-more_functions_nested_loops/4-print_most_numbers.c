#include "main.h"

/**
 *print_most_numbers - Prints numbers exepted 2 and 4
 *
 *_putchar: Result of print
 *
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 4 || num == 2)
			num++;
	_putchar(num + '0');
	}
	_putchar('\n');
	
}
