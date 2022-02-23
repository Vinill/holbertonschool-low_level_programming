#include "main.h"

/**
 * _print_rev_recursion - Funcion that print a string in reverse
 *
 * @s: Is a pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
