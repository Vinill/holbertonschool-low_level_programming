#include "main.h"
/**
 * _islower - Devuelve 0 o 1 si es minuscula
 *
 * @c: Is var
 *
 * Return: si es minuscula retorna 0 sino 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}else
	{
		return(0);
	} 
}
