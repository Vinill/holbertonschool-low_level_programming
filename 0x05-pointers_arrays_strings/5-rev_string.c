#include "main.h"

/**
 *funtion - Recorre los caracteres
 *
 *@s: A var
 *
 *Return: Return lon
 *
 **/


int funtion(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}

	return (lon);
}

/**
 *funtion - Recorre los caracteres
 *
 *@s: A var
 *
 **/

void rev_string(char *s)
{
	int i = 0;
	int j = (funtion(s) - 1);
	char num;

	while (i < j)
	{
		num = s[i];
		s[i] = s[j];
		s[j] = num;
		i++, j--;
	}

}
