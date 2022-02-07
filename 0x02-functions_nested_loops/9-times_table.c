#include "main.h"
/**
 *jack_bauer - Devuelve el ultimo digito de n
 *
 *Return: Table 9
 */
void times_table(void)
{
	int line;
	int column;
	int num;

	for (line = 0; line <= 9; line++)
	{
		for (column = 0; column <= 9; column++)
			num = (line * column);
			if (column == 0)
			{
				_putchar(' ');
				_putchar(',');
				_putchar(num + '0');
			}
			else if (column <= 9)
			{
				_putchar(' ');
				_putchar(',');
				_putchar(num + '0');
			}
			else if (num > 9)
			{
				_putchar(' ');	
				_putchar(',');
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			return ('\n');
	}
}
