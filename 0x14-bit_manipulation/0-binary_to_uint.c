#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 *
 * @b: Poiter of type const char
 *
 * Return: Num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		num += b[i] - '0';
		i++;
	}

	return (num);
}
