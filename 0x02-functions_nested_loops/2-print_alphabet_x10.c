#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Imprimir abecedario 10 veces
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for (ch = 0; ch <= 9; ch++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(ch[i]);
		}
		_putchar ('\n');
	}
}
