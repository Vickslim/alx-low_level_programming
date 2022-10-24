#include "main.h"

/**
 * puts_half - prints
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\n')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
