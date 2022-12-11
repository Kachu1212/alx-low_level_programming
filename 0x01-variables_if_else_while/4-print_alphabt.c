#include <stdio.h>
/**
*main - Entry no Augument
*Description - Display the alphabet in lowercase
*Return: Return 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)

	{

	if (a == 'e' || a == 'q'){
	continue;

	}

	putchar(a);
	}
	putchar('\n');

	return (0);

}
