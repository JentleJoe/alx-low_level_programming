#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	i = 0;
	while (i < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[i][x]);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
