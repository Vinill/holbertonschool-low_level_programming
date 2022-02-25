#include <stdio.h>
#include "main.h"

/**
 *main - Funcion para imprimir el nombre
 *
 *@argc: No se usa
 *
 *@argv: Posicion del nombre tipo char
 *
 *Return: 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
