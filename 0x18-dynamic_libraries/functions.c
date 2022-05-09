#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Devuelve 0 o 1 si es minuscula
 *
 * @c: Is var
 *
 * Return: si es minuscula retorna 0 sino 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - Devuelve 0 o 1 si es minuscula
 *
 * @c: Is var
 *
 * Return: si es minuscula retorna 0 sino 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *_abs - Devuelve -n si es menor a 0 sino n
 *
 * @n: Is var
 *
 * Return: -n o n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

/**
 *_isupper - Print
 *@c: Is a variable
 *Return: 1 y 0
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

