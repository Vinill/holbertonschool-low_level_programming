#include "main.h"

/**
 *divisible - Function one
 *@num: Given number
 *@divisor: Var
 *Return: Div and num
 */
int divisible(int num, int divisor)
{
	if (num % divisor == 0)
		return (0);
	else if (divisor == num / 2)
		return (1);

	return (divisible(num, divisor + 1));
}


/**
 *is_prime_number - Function two
 *@n: variable
 *Return: divisible and n
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, divisor));
}
