#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *tar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tar = malloc(sizeof(char) * size);
	if (tar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tar[i] = c;
		i++;
	}
	return (tar);
}
