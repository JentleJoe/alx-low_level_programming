#include "main.h"
#include <string.h>
/**
 * is_palindrome - Function that checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (strlen(s) == 0 || strlen(s) == 1)
	{
		return (1);
	}
	if (s[0] != s[strlen(s) - 1])
	{
		return (0);
	}
	s[strlen(s) - 1] = '\0';

	return (is_palindrome(s + 1));
}

