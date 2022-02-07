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
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit + '0');

	return(lastDigit);
}
