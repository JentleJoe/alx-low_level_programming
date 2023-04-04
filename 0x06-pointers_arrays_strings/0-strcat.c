#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;	/* ptr holds the address of the dest string */

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (ptr);
}
