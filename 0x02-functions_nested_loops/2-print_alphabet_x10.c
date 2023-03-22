#include "main.h"

/**
 * main - prints alphabets a - z (10 times)
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;
	int i;

	for(i = 0; i < 10; i++)
	{

		for(ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

	return (0);
}

