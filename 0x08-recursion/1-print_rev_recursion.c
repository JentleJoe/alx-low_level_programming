#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 */

void _print_rev_recursion(char *s)
{
	int i;

	while (*s[i + 1] != '\0')
		i++;
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
