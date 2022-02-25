#include "main.h"

/**
 * _strlen - Is a punter
 *
 * @s: Is a punterr
 *
 * Return: print the lon value
 */

int _strlen(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	return (lon);
}
