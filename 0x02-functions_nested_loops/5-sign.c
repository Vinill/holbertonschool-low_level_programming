#include "main.h"
/**
 * _sign - Devuelve 0 o 1 si es minuscula
 *
 * @n: Is var
 *
 * Return: si es minuscula retorna 0 sino 1
 */

int _sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
}
