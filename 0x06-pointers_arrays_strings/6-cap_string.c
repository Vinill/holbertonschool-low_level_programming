#include "main.h"

/**
 * cap_string - Funcion que cambia minunsculas por mayusculas
 * @n: Puntero
 * Return: Return n
 */
char *cap_string(char *str)
{
	int i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
	{
		while (str[i] != '\0')
		{
			if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!'
			|| str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ' ')
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 'a' + 'A'; /* str[i + 1] = str[i + 1] - 32; */
				}
			}
			i++;
		}
	}
	return (str);
}
