#include "main.h"

/**
 * print_square - function entry poiint to print squares
 * @size: user input that determines the size of the square
 *
 * Retutn - void
 */

void print_square(int size)
{
	int i = 0;
	int a;

	if (size > 0)
	{
		while (i < size)
		{
			for (a = 0; a < size; a++)
			{
				_putchar ('#');
			}
			if (i == (size - 1))
			{
				break;
			}
			_putchar ('\n');
			i++;
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}

}
