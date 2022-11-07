#include "main.h"
/**
 * factorial - fuction returns the factorial of a given number
 * @n: given number
 * Return: i(success), -1(error)
 */

int factorial(int n)
{
	int i;

	i = n * factorial(n - 1);
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	return (*i);
}
