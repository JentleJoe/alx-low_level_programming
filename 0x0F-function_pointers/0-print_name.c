#include "function_pointers.h"
#include "stdlib.h"

/**
 * print_name - prints name
 * @f: pointer to function
 * @name: name to print
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
	char a[] = "name";
	int i;

	f = print_name;

	for (i = 0; a[i] <= '\0'; i++)
	{
		if (a[i + 1] == '\0')
		{
			break;
		}

		printf("%c", a[i]);
	}
	_putchar('\n');
	}
}
