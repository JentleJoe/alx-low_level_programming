#include "main.h"
/**
 * _pow_recursion - returns the power of x raised to the power of y
 * @x: integer to be raised to power of y
 * @y: number to raise integer to
 *
 * Return: -1 if y is lower than 0, value of x raised to power y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
