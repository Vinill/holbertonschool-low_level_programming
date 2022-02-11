#include "main.h"

/**
 * funtion - retorna lon
 * @s: string
 * Return: lon
 */

int funtion(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}

	return (lon);
}

/**
 * puts2 - imprime saltos de numeros
 * @str: imprime strins
 */

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0' && j < funtion(str); j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
