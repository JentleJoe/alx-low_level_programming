#include <stdio.h>
#include "main.h"

/**
 * swap_int - Function to swap integer
 * @a:  First integer
 * @b: second integer
 *
 * Return - void *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
