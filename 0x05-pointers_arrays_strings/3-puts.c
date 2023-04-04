#include "main.h"

/**
 * _puts - function that prints string with a newline
 * @str: string variable
 */
void _puts(char *str)
{
	while (*(str + 1) != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
