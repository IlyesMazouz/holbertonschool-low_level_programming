#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include "stdio.h"
#include "stdarg.h"

/**
*struct print - Struct print
*@format_specifier: format specifier to print
*@f: pointer to the corresponding function
*/

typedef struct printf
{
	char format_specifier;
	void (*f)(va_list args);
} _printf;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
