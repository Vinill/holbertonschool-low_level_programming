#include <stdio.h>
/**
*main - Imprime numeros del 1 al 9 con espacios y comas
*Return: Always 0
*/

int main(void)
{
	int in;

	for (in = 0 ; in <= 9 ; in++)
	{
		putchar(in + '0');
	if (in != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
