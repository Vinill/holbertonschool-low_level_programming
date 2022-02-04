#include <stdio.h>
/**
*main - Imprime 0123456789abcdef
*Return: Always 0
*/

int main(void)
{
	char ch;
	int in;

	for (in = 0 ; in <= 9 ; in++)
	{
		putchar(in + '0');
	}
	for (ch = 'a'; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
