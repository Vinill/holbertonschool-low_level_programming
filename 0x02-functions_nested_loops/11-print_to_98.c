#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Hi
 *
 *@n: Hi
 *
 */

void print_to_98(int n)
{

	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n >= 98)
	{
		printf("%d, ", n);
		n--;
	}
		printf("%d", n);

		printf("\n");
}