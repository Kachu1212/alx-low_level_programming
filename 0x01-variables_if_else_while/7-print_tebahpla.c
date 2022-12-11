#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry no Argument
*Description - Display the alphabets in reverse order z to a
*Return: Return 0
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		printf("%c", a);
	}
	putchar('\n');

	return (0);

}
