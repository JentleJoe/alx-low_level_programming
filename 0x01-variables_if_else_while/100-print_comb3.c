#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * @num1 - holds the first digit
 * @num2 - holds the second digit
 *
 * Return: 0 if successful
 */

int main(void)
{
	int num1, num2;

	num1 = num2 = 0;
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
			if (num1 > num2 || num1 == num2)
				continue;
			else if (num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				/**
				 * prevent printing of comma (,) and adding
				 * space after last digit is reached
				 */
				if (num1 == 8 && num2 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		if (num1 == 8 && num2 == 9)
			break;
	}
	putchar('\n');
	return (0);
}

