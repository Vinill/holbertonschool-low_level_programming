#include <stdio.h>
/**
*main - Print the possible combinations between 1 and 0 with spaces and commas
*Return: Always 0
*/

int main(void)
{
	int numUno, numDos;

	for (numUno = 0; numUno < 9; numUno++)
	{
		for (numDos = numUno + 1; numDos < 10; numDos++)
		{
			putchar((numUno % 10) + '0');
			putchar((numDos % 10) + '0');

			if (numUno == 8 && numDos == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
