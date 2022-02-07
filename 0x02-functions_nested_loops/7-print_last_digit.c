#include "main.h"
/**
 *print_last_digit - Devuelve el ultimo digito de n
 *
 * @n: Is a var
 *
 * Return: Num
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit >= 0)
	{
		_putchar(lastDigit + '0');
		return(lastDigit);
	}
	else
	{
		_putchar(lastDigit + '0');
		return(-lastDigit);
	}
}
