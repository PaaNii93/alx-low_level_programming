#include "main.h"
#include <stdio.h>

/**
 * _abs - entry point.
 * Description: computes absolute value of an integer.
 * @n: int to be operated on.
 * Return: an unasigned int value
 **/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
