#include "main.h"

/**
 * print_last_digit - entry point.
 * Description: prints the last digits of any number.
 * @n: int value.
 * Return: the last digit.
 **/

int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
		return (a);

	else
	{
		a = _abs(n % 10);
		return (a);
	}
}
