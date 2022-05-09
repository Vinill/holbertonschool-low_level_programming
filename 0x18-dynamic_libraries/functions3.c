#include "main.h"

/**
 *_memcpy - Is a function that reemplaced dest for src
 *@dest: Its pointer of type char
 *@src: Its pointer of type char
 *@n: Its variable of type usigned int
 *Return: Return s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}

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
