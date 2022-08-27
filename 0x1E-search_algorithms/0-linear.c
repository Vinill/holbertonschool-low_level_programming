#include "search_algos.h"
/**
 *linear_search - Codigo para conectar 2 strings
 *@array: Is a pointer to the first element of the array to search in
 *@size: If the number of elements in array
 *@value: Is the value of search for
 * Return: If array is null return -1, else return a value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t num;

	if (array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		printf("Value checked array[%lu] = [%d]\n", num, array[num]);
		if (array[num] == value)
		{
			return (num);
		}
	}
	return (-1);
}
