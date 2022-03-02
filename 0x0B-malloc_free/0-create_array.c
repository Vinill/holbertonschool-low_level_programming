#include <stdlib.h>
#include <stdlib.h>

/**
 *create_array - funtion tath print the matriz
 *
 *@size: Is a value for funtion
 *
 *@c: Is a variable of type char
 *
 *Return: return array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);

}
