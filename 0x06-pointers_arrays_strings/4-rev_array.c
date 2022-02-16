#include "main.h"
#include <stdio.h>
/**
 *reverse_array - Codigo para invertir
 *@a: Is a puntero
 *@n: Variable que lo recorre
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int tmp;

	if (n > 1)
	{
		n = n - 1;
		for (; j < n; j++)
		{
			tmp = a[n];
			a[n] = a[j];
			a[j] = tmp;
			n--;
		}
	}
}
