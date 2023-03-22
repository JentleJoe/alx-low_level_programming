#include "main.h"

/**
 * _isalpha - Function that checks if character is uppercase
 * @c: character argument passed
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return; 0 otherwise
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

