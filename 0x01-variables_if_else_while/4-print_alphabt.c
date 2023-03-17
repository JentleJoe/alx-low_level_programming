#include <stdio.h>
/**
 * main - Entry point
 * @ch -  variable to hold letter
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char ch = 'a';

	for (i = 0; i < 24; i++)
	{
		putchar(ch);
		ch++;
		if (ch == 'e' || ch == 'q')
			ch++;
	}
	putchar('\n');
	return (0);
}
