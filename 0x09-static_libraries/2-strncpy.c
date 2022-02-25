#include "main.h"

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
