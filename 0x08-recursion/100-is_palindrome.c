#include "main.h"
/**
 * is_palindrome - Function that checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *ptr;

	ptr = s;
	/* incrementing ptr to end of string to compare characters */
	while (*(ptr + 1) != '\0')
		ptr++;

	while (*(s + 1) != '\0')
	{
		if (*s != *ptr)
			return (0);

		s++;
		ptr--;
	}
	return (1);
}
