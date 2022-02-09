#include "main.h"

/**
 *more_numbers - Prints numbers to 1 of 14 
 *
 *_putchar: Result of print
 *
 */
void more_numbers(void)
{
	int i;
	int num;

	for (num = 1; num <= 10; num++)
	{
	for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}	
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
