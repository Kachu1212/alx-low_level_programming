#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: The string to get the length of.
 *i
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int lenStr = 0;

	while (*str++)
		lenStr++;

	return (lenStr);
}
