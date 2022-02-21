#include "main.h"

/**
 *_strpbrk - Is a function that print a caracters
 *@s: Its pointer of type char
 *@accept: Its pointer of type char
 *Return: Return null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
