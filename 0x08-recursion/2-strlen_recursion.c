#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to compute length of
 * Return: 1
 */

int _strlen_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
