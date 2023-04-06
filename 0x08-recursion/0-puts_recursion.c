#include "main.h"
/**
 * _puts_recursion - prints string followed by a newline
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
