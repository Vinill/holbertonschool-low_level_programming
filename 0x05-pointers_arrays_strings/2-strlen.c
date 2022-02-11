#include "main.h"

/**
 * _strlen - Is a punter
 *
 * @a: Is a punterr
 *
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
