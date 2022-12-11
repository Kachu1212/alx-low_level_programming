#include <stdio.h>

/**
*main -main function
*Description - Display all possible different combinations of two digits.
*Return: Return 0
*/

int main(void)
{

	int i, k;

	for (i = 0; i <= 9; i++)

	{
		for (k = 1; k <= 9; k++)

		{
			if (k > i)
			{
				putchar(i + '0');
				putchar(k + '0');

				if (i != 8)
				{

				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
