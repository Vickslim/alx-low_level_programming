#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: char to br printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}