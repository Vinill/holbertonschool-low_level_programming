nclude "main.h"
/**
 *jack_bauer - Devuelve el ultimo digito de n
 *
 * Return: Num
 */

void jack_bauer(void);
{
	int hrs = 0;
	int min = 0;

	while (hrs < 24)
	{
		while (min < 60)
		{
			_putchar ('0' + (hrs / 10));
			_putchar ('0' + (hrs % 10));
			_putchar (':');
			_putchar ('0' + (min / 10));
			_putchar ('0' + (min % 10));
			_putchar (':');
			_putchar ('\n');
			min++;
		}
		min = 0;
		hrs++;
	}
}
