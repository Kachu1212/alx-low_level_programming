#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry no Argument
*Description -Display the alphabet in lowercase then also in uppercase
*Return: Return 0
*/

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)

	{
		putchar(a);
	}

	for (A = 'A'; A <= 'Z'; A++)

	{
		putchar(A);
	}
	putchar('\n');

	return (0);

}
