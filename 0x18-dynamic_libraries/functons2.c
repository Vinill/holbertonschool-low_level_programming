#include "main.h"

/**
 *_strcat - Codigo para conectar 2 strings
 *
 *@dest: String "Hello"
 *
 *@src: String "World"
 *
 * Return: Return this code
 */

char *_strcat(char *dest, char *src)
{
	int idx_dest, idx_src;

	for (idx_dest = 0; dest[idx_dest] != '\0';)
		idx_dest++;

	for (idx_src = 0; src[idx_src] != '\0'; idx_src++)
	{
		dest[idx_src + idx_dest] = src[idx_src];
	}
	dest[idx_src + idx_dest] = '\0';

	return (dest);
}

/**
 *_strncat - Code for return the value n
 *
 *@dest: Value
 *@src: Value two
 *@n: Valor of n
 *Return: Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}

/**
 * _strncpy - Code for return the value n
 * @dest: Value
 * @src: Value two
 * @n: Valor of n
 * Return: Return dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}

/**
 * _strcmp - Codigo que compara dos valores
 *@s1: Primer valor
 *@s2: Segundo valor
 *Return: Return values
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}

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
