#include "main.h"
/**
 * _puts_recursion - prints string followed by a newline
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
