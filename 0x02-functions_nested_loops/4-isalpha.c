#include "main.h"
/**
 * _isalpha - Devuelve 0 o 1 si es minuscula
 *
 * @c: Is var
 *
 * Return: si es minuscula retorna 0 sino 1
 */

int _isalpha(int c)
{
        if (c >= 'a' && c <= 'z') || (c <= 'A' && >= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
