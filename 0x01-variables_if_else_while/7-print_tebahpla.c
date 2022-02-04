#include <stdio.h>
/**
 * main - Muestra numeros del 0 al 9
 * Return: Always 0
 */

int main(void)
{
	int in;

	for (in = 'z' ; in >= 'a' ; in--)
	{
		putchar(in + '0');
	}
	putchar('\n');
	return (0);
}
