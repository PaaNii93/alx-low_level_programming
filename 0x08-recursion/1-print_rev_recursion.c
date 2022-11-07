#include "main.h"
#include <string.h>
/**
 * _`print_rev_recursion - function prints a string in reverse
 * @s: pointer of string.
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
