#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function that convert a string to an integer
 *
 * @s: Pointer char
 *
 * Return: n * op
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * op);
}
