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
