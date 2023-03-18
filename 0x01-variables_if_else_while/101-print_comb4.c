#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * @num1 - holds the first digit
 * @num2 - holds the second digit
 * @num3 -holds the third digit
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num1, num2, num3;

	num1 = num2 = num3 = 0;
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num1 > num2 || num1 == num2)
				continue;
			else if (num1 < num2)
			{
				for (num3 = 0; num3 <= 9; num3++)
				{
					if (num2 > num3 || num2 == num3)
						break;
					else if (num2 < num3)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(num3 + '0');
						/**
						 * prevent printing of comma (,) or
						 * adding white space after last value
						 */
						if (num1 == 7 && num2 == 8 && num3 == 9)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
