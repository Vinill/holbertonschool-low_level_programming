#include "main.h"

/**
 *print_rev - Hear is a rev
 *
 *@s: Is a s
 *
 *_putchar: return
*/


void print_rev(char *s)
{

	int lon = 0;
	int j;

	while (*s != '\0')
	{
		lon++;
		++s;
	}
	s--;
	for (j = lon; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
