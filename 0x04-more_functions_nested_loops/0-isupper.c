#include "main.h"

/**
 * _isupper - checks for upper case in character
 * similar to the isupper function
 *
 * @c: variable that checks for uppecase
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

