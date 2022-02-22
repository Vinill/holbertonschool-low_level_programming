#include "main.h"

/**
 *_strstr - Print a substring
 *@haystack: A variable of type char
 *@needle: A variable of type char
 *Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
