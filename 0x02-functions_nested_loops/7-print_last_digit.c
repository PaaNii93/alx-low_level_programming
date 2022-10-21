#include "main.h"

/**
 * print_last_digit - entry point.
 * Description: prints the last digits of any number.
 * @n: int value.
 * Return: the last digit.
 **/

int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		return (n);

	else
	{
		n = _abs(n % 10);
		return (n);
	}
}
