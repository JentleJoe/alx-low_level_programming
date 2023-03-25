#include "main.h"

/**
 * print_line - draws a staight in the terminal
 * @n: user input that determines the number of times ' _ ' is printed
 *
 * Retutn - void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar ('_');
			i++;
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}

}
