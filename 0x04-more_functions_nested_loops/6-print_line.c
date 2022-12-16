#include "main.h"

/**
* print_line - Draws a straight line in the terminal
* @n: The number of _ characters to be printed.
* Return: 0
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
