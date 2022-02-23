#include "main.h"

/**
 *factorial - Funcion that return the factorial num
 *
 *@n : Its a variable
 *
 *Return: 1 is < a 0
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
