#include "main.h"
/**
* main - prints the string _putchar
*
* Return: 0
*/

int main(void)
{
	char *str = "_putchar";
	
	int i = 0;
	
	for(i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return(0);
}
