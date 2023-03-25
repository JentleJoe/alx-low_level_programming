#include "main.h"

/**
 * print_triangle(int size) - Prints a triangle with the
 * size specified using the (#) synbol
 * @size: user input that determines size of triangle
 *
 * Return - void
 */

void print_triangle(int size);
{
	int i, space, shape, countdown;

	countdown = size - 1;

	for (i = 1; i <= size; i++)
	{
		for (space = countdown; space > 0; space--)
			_putchar(' ');
		for (shape = i; shape > 0; shape--)
			_putchar('#');

		_putchar('\n');
		countdown--;
	}
}
