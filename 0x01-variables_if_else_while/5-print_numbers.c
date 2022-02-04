#include <stdio.h>
/**
 * main - Muestra el abecedario exepto q y e
 * Return: Always 0
 */

int main(void)
{
	int in;

	for (in = 0 ; in <= 9 ; in++)
	{
		putchar(in + '0');
	}
	putchar('\n');
	return (0);
}
