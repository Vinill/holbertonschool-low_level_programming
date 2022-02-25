#include "main.h"

/**
 * _puts_recursion - Funcion that print a string in reverse
 *
 * @s: Is a pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion();
	}
	else
		_putchar('\n');
}
