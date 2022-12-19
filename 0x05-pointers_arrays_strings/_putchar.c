#include <unistd.h>

/**
 3bsHYHMj4xyKyfPHP1NfPMYGF4SG2M5DX3VN9eEPRWdd
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
