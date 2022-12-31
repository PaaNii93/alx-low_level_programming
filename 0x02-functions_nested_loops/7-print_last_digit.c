#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * Return: returns the last digit to calling function
*/
int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
	{
		putchar (a);
	}
	else
	{
		a = abs(a % 10);
		putchar (a);
	}
	putchar ('\n');
	return (a);
}
