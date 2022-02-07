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

	for (i = 0; i <= 9; i++)
	{
		for (ch = 0; ch <= 25; ch++)
		{
			_putchar(ch[i]);
		}
		_putchar ('\n');
	}
}
