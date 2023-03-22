#include "main.h"

/**
 * _abs - Function that prints the absolute value of an integer
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
