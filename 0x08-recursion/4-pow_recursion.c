#include "main.h"

/**
 *_pow_recursion - Funcion that return the factorial num
 *
 *@x: a variable
 *
 *@y: a variable
 *
 *Return: num
 */

int _pow_recursion(int x, int y)
{
	int num = x;

	if (y < 0)
		return (-1);

	else if (y >= 0 && y <= 0)
		return (1);

	num *= _pow_recursion(x, y - 1);
		return (num);
}
