#include <stdio.h>
/**
*main - Imprime las combinaciones posibles entre 1 y 0 con espacios y comas
*Return: Always 0
*/

int main(void)
{
	int numUno, numDos;

	for (numUno = 0; numUno < 10; numUno++)
	{
		for (numDos = 0; numDos < 10; numDos++)
		{
			putchar((numUno % 10) + '0');
			putchar((numDos % 10) + '0');

			if (numUno == 9 && numDos == 9)
				continue;
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
