#include "main.h"
/**
 * _sqrt_recursion - returns natural square of a number
 * @n: integer to compute natural square
 *
 * Return: square root, -1 if it does not have a natural square root
 */


int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	while (i * i < n)
	{
		i++;
	}

	if (i * i == n)
		return (i);
	else
		return (-1);
}

