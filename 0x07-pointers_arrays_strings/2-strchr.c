#include "main.h"

/**
 *_strchr - Is a function that print last of l
 *@c: Its pointer of type char
 *@s: Its pointer of type char
 *Return: Return s + index
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
