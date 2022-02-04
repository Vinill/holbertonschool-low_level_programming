#include <stdlib.h>
#include<time.h>
/**
 *main - Genera numero del 1 al 100
 *Return: Valor de n
 */
void main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	}
		printf("is zero");
	}
	else if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		prinitf("is negative")"\n";
	}
	return (0);
}
