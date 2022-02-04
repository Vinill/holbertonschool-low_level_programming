#include <stdio.h>
/**
*main - Imprime 0123456789abcdef
*Return: Always 0
*/

int main(void)
{
	char ch;
	int in;

	for (ch = 'a'; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	for (in = 0; in <= 9 ; in++)
	{
		putchar(in);
	}
	putchar('\n');
	return (0);
}
