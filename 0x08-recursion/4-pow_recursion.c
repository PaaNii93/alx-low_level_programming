#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: number
 * @y: raised power number
 * Return - i (success)
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	i = (x * _pow_recursion(x, y - 1));
	return (i);
}
