#include "main.h"

/**
  * _isdigit - Checks if a given character is
  * a digit or not (similar to isdigit function)
  *
  * @c: variable that cheecks for digit
  *
  *Return: 1 if c is a digit, 0 otehrwise
  */


int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);

}

