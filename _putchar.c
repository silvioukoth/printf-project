#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to be printed
 *
 * Return: on the success 1.
 * on the error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
