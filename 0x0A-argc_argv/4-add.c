#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* main - agrega numeros positivos
* @argc: contador
* @argv: valor
* Return: 0 si pasa 1 si no
*/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < (int)strlen(argv[a]); b++)
		{
			if (argv[a][b] >= 48 &&  argv[a][b] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
