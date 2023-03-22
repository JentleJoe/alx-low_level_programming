#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: variable used to run the check
 *
 * Return: 1 if positive, returns -1 if negative and returns 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
