#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: variable of type unsigned int
 * @size: variable type int
 * Return: p 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p = NULL;

	if ((nmemb != 0) && (size != 0))
	{
		p = malloc(nmemb * size);
		if (p != NULL)
		{
			for (i = 0; i < (nmemb * size); i++)
				p[i] = 0;
		}
	}
	return (p);
}
