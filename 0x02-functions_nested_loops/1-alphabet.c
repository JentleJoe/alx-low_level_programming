#include "main.h"

/**
 * main - prints alphabets a - z
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}

