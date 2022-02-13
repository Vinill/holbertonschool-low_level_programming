#include "main.h"

/**
 * puts_half - Hi its is a ejercice
 *
 * @str: Its a puntero
 *
 */


void puts_half(char *str)
{
	int index = 0, lon = 0, n;

	while (str[index++])
		lon++;

	if ((lon % 2) == 0)
		n = lon / 2;

	else
		n = (lon + 1) / 2;

	for (index = n; index < lon; index++)
	{
		_putchar(str[index]);
	}
		_putchar('\n');
}
