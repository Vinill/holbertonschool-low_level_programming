#include "main.h"

/**
 *factorial - Funcion that return the factorial num
 *
 *@n : Its a variable
 *
 *Return: 1 is < a 0
 */

int factorial(int n)
{
	int num = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 0)
		return (1);

	num *= factorial(n - 1);
	return (num);
}
