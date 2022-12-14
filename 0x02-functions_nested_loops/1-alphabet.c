#include "main.h"

/**
 *print_alphabet - print the alphabet, in lowercase
 *Return: Return void when successful
*/

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{

		_putchar(a);
	}
	_putchar('\n');
}
