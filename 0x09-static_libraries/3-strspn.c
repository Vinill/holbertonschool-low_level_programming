#include "main.h"

/**
 *_strspn - Is a function that print last of l
 *@s: Its pointer of type char
 *@accept: Its pointer of type char
 *Return: Return len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (len);
	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

/**
 * _strchr - function
 * @c: character
 * @s: pointer
 * Return: return s + 1, || '\0'
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
