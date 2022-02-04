#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Encuantra el ultimo digito
 * Return: Devuelve 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("last digit of %d is %d greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("last digit of %d is %d greater than 5", n, lastDigit);
	}
	if (lastDigit < 6)
	{
		printf("last digit of %d is %d greater than 5", n, lastDigit);
	}
	return (0);
}
