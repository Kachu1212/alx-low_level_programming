#include <stdio.h>

/**
*main - Entry no Argument
*Description - Display the single digits  in base 10
*Return: Return 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);

}
