#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a;
	char *y;

	a = 1;
	y = (char *)&a;
	return (*y);
}
