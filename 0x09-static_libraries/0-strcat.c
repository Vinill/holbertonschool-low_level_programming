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
