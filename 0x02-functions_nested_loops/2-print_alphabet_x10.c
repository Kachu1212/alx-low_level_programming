#include "main.h"

/**
* print_alphabet_x10 -prints lowercase alphabets ten times
*Return: Return 0 when sucessful
*/

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		 _putchar('\n'); 
	}
}

