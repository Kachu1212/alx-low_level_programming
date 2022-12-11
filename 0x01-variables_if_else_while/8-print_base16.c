#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry no Argument
*Description - Display all base 16 number in lowercase
*Return: Return 0
*/

int main(void)
{
	int i;
	char a;

	for (i = '0'; i <= '9'; i++)

		putchar(i);

	for (a = 'a'; a <= 'f'; a++)

		putchar(a);

	putchar('\n');

	return (0);
}
