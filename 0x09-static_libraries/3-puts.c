#include "main.h"

/**
 * _puts - Print
 *
 * @str: Is a punterr
 *
 * _putchar: Return stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
