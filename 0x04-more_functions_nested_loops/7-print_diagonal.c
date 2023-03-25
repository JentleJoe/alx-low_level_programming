#include "main.h"

/**
 * print_diagonal - draws a staight in the terminal
 * @n: user input that determines the number of times ' \ ' is printed
 *
 * Retutn - void
 */

void print_diagonal(int n)
{
	int i = 0;
	int a;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar ('\\');

			if (i == (n - 1))
			{
				break;
			}
			_putchar ('\n');

			for (a = 0; a <= i; a++)
			{
				_putchar (' ');
			}
			i++;
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}

}
