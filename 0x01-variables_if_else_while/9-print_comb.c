#include <stdio.h>

/**
*main - main function
*Description - Display all possible combinations of single-digit numbers.
*Return: Returns 0
*/

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
