#include <stdio.h>
/**
 *main - Muestra el abecedario
 *Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
