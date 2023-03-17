#include <stdio.h>
#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point
 *
 * return: 1 to show unsuccessful
 */
int main(void)
{
	write(STDERR_FILENO, MESSAGE, sizeof(MESSAGE)-1);
	return (1);
}
