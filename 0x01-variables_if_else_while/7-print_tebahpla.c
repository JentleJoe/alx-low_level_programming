#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char ch = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
