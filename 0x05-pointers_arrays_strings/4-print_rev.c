#include "main.h"

/**
 * print_rev -  print reverse function
 * @s - string characters
 * Description - prints a string, in reverse, followed by a new line
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
