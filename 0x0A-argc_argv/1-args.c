#include <stdio.h>
#include "main.h"

/**
 *main - Funcion para imprimir la cantidad de argumentos
 *
 *@argc: Numero de atributos
 *
 *@argv: Unused
 *
 *Return: 0
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
