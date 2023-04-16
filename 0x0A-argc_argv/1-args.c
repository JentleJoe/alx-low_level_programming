#include <stdio.h>

/**
 * main - Program that prints the number of all arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0, if successful
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = 0;
	while (i < (argc - 1))
	{
		i++;
	}
	printf("%d\n", i);

	return (0);
}
