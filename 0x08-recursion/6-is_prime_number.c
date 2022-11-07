#include "main.h"

/**
 * _is_prime_number - function returns prime number
 * @n: is number
 * Return: 1(when n is a prime number), else 0
 */

int _is_prime_number(int n)
{
	int i;

	i = (2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,\
			47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97);
	if (n != i)
		return (0);
	else
		return (1);
}
