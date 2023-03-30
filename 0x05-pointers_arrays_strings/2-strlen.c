#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to compute length
 *
 * Return: the length of the string
 */


int _strlen(char *s)
{
	int i;

	for (i = 1; *(s + 1) != '\0'; s++)
		i++;
	
	return(i);
}
