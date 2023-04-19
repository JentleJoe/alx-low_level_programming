#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @f: pointer to function
 * @name: name to print
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
