#include <stdio.h>
/**
 *  *main - Muestra el abecedario
 *   *Return: Always 0
 *    */

int main(void)
{
	        char ch;
		char CH;

	        for (ch = 'a'; ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
		for (CH = 'A'; CH <= 'Z' ; ch++)
		{
			putchar(CH);
		}
		putchar('\n');
		return (0);
}
