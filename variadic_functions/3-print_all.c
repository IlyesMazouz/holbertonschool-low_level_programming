#include "variadic_functions.h"

/**
*print_c - function that prints a charachter
*@args: variable number of arguments
*/

void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
		return;
}

/**
*print_int - function that prints an integer
*@args: variable number of arguments
*/

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
		return;
}

/**
*print_f - print a float
*@args: variable number of arguments
*/

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
*print_s - function that prints a string
*@args: variable number of arguments
*/

void print_s(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	printf("%s", !s ? "(nil)" : s);
}

/**
*print_all - a function that prints anything
*@format: a constant charachter
*
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int start = 0, i = 0, j;
	char *pri = ", ";

	_printf formats[] = {
			{'c', print_c},
			{'i', print_int},
			{'f', print_f},
			{'s', print_s},
			{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].format_specifier)
		{
			if (format[i] == formats[j].format_specifier)
			{
				if (start)
					printf("%s", pri);
				start = 1;
				formats[j].f(args);
				break;
			}
			j++;
		}
	i++;
	}
	va_end(args);
	printf("\n");
}
