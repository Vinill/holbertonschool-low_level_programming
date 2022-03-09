#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - function that searches for an integer
 *              given as a parameter on each element of an array
 *@array: Array
 *
 *@size: This is a size
 *
 *@cmp: Is a pointer to the function
 *
 *Return: return index, -1 and -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
