#include <stdio.h>
/**
 * main - Muestra numeros del 0 al 9
 * Return: Always 0
 */

int main(void)
{
	int in;
	char ch;

	for (in = 0 ; in <= 9 ; in++)
	{
		putchar(in + '0');
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
