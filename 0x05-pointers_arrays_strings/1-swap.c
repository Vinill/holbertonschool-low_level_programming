#include "main.h"

/**
 * swap_int - Swaps of the values numbers
 *
 *@a: Is a variable
 *@b: Is a variable
 *
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
