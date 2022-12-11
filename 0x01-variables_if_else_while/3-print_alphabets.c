#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main9 - Entry noi*Description 
*Display - the alphabet in lowercase then also in uppercase
*Return: Return 0
*/

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)

	{
		putchar(a);
	}
	putchar('\n');
	
	for (A = 'A'; A <= 'Z'; A++)

	{
		putchar(A);
	}
	putchar('\n');

	return (0);

}
