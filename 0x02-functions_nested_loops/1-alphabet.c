#include "main.h"

/**
 * print_alphabet - Function that prints alphabets a - z
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

