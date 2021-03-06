#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: Variable of type long int
 *
 * @index: Variable of type unsigned int for increment
 *
 * Return: 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n == 0)
		return (-1);
	if (index > 31)
		return (-1);

	bit = (n >> index) & 1;

	if (bit != 0 && bit != 1)
		return (-1);

	return (bit);	
}
