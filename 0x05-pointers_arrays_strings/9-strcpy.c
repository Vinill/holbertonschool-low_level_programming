#include "main.h"
/**
 *_strlen - Function one
 *@s: Pointer of type char
 *Return: increment
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}


/**
 * _strcpy - Function
 * @dest: Pointer of type char
 * @src: Pointer of type char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}
