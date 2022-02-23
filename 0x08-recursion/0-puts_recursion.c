#include "main.h"

/**
 * _puts_recursion - Funcion that print a string
 *
 * @s: Is a pointer
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
