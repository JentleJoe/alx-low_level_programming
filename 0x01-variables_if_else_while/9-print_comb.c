#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * @i - variable to contain the number
 *
 * Return: 0, if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
