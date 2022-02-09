#include "main.h"

/**
 *_isupper - Print
 *@c: Is a variable
 *Return: 1 y 0
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
