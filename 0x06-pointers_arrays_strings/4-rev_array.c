#include "main.h"

/**
 *reverse_array - Codigo para invertir
 *@a: Is a puntero
 *@n: Variable que lo recorre
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n;
	int tmp;

	for (; a[i]; i++)
		if (i >= n)
		break;
	j--;
		
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

}
