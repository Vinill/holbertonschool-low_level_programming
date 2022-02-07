#include <stdio.h>
#include "main.c"
/**
 * main - Imprime _putchar
 * Return: allways 0
 */

int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar ('\n');
	return (0);
}
