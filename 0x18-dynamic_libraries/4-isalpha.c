#include "main.h"

/**
*_isalpha - checks for alphabetic character.
*
*@c: the parameter of the function
*Return: Returns 1 if c is a letter, lowercase or uppercase else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

