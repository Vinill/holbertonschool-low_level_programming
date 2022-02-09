#include "main.h"
/**
 * _isdigit - Devuelve el ultimo digito de n
 *
 * @c: Is a var
 *
 * Return: Num
 */

int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
		return(1);
	else 
		return(0);
}
