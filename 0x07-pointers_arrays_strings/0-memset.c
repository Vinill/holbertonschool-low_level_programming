#include "main.h"

/**
 *_memset - Is a function that reemplaced the before 95 a ouput
 *@s: Its pointer
 *@b: Its variable of type char
 *@n: Its variable of type usigned int
 *Return: Return a s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
