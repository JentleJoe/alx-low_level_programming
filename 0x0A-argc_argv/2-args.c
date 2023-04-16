#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0, if successful
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

