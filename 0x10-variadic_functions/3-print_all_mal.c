#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print a char
 * @c: input
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - print a integer
 * @i: input
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - print a float
 * @f: input
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 *print_all - Prints anything, followed by a new line
 *
 *@format: A string of characters arguments types
 *@...: Number of a be printed
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *x = "";
	va_list args;
	form_t form_ops[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (form_ops[j].form != NULL)
		{
			if (form_ops[j].form[0] == format[i])
			{
				printf("%s", x);
				form_ops[j].f(args);
				x = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

