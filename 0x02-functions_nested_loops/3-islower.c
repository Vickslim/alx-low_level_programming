#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the charater
 * Return: 1 if lettewr in lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'zz')
		return (1);
	else
		return (0);
}
