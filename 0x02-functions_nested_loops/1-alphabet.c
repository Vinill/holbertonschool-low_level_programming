#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Imprimir abecedario
 *
 */
void print_alphabet(void)
{
	int i;
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <= 25; i++)
	{
		_putchar(ch[i]);
	}
	_putchar ('\n');
}
