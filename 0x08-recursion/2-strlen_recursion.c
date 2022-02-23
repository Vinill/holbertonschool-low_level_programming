#include "main.h"

/**
 * _strlen_recursion - Funcion that print a length of a string
 *
 *@s : Its a pointer
 *
 * Return: return funcion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
