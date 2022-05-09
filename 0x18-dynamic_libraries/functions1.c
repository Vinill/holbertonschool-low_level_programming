#include "main.h"

/**
 * _isdigit - Devuelve el ultimo digito de n
 *
 * @c: Is a var
 *
 * Return: Num
 */

int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

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

/**
 * _puts - Print
 *
 * @str: Is a punterr
 *
 * _putchar: Return stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 *_strcpy - asd
 *@dest: asd
 *@src: asd
 *Return: asd
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
	
}

/**
 *_atoi - asd
 *@s: asd
 *Return: asd
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