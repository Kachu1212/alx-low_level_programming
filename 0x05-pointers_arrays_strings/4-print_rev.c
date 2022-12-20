#include "main.h"

/**
 * print_rev -  print reverse function
 * @str - string characters
 * Description - prints a string, in reverse, followed by a new line
 *
 * Return: Always 0.
 */

void print_rev(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
