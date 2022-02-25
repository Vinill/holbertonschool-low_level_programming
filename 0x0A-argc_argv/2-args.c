#include <stdio.h>
#include "main.h"

/**
 *main - Funcion para imprimir la cantidad de argumentos total
 *
 *@argc: Numero de atributos
 *
 *@argv: atributo a printear
 *
 *Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
