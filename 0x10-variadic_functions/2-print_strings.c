#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - is a function that prints strings
 * @n: is the input
 * @separator: separator input
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lid;
	char *s;

	va_start(lid, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(lid, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
		va_end(lid);
		printf("\n");
}
