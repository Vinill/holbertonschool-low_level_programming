#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Imprimir abecedario 10 veces
 *
 */
void print_alphabet_x10(void)
{
	int j;
	int i;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			_putchar(ch[j]);
		}
		_putchar ('\n');
	}
}
