#include "main.h"

/**
 *print_to_98 - Hi
 *
 *@n: Hi
 *
 */
void print_to_98(int n)
{
	for (n < 98)
	{
		_putchar("%d, ", n);
		n++;
	}
	for (n > 98)
	{
		_putchar("%d, ", n);
		n--;
	}
	for (n == 98)
	{
		_putchar("%d, ", n)
		_putchar("\n");
	}
}
