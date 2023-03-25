#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char num;
	int i = 0;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
		i++;
	}
}
