#include "main.h"

/**
 * cap_string - Funcion que cambia minunsculas por mayusculas
 * @n: Puntero
 * Return: Return n
 */
char *cap_string(char *n)
{
	int i = 0;

	if (n[i] > 96 && n[i] < 123)
		n[i] = n[i] - 2;
	{
		while (n[i] != '\0')
		{
			if (n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '!'
			|| n[i] == '?' || n[i] == '"' || n[i] == '(' || n[i] == ')'
			|| n[i] == '{' || n[i] == '}' || n[i] == '\t' || n[i] == '\n'
			|| n[i] == ' ')
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = n[i + 1] - 'a' + 'A'; /* n[i + 1] = n[i + 1] - 32; */
				}
			}
			i++;
		}
	}
	return (n);
}
