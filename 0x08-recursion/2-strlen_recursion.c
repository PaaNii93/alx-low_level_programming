#include "main.h"

/**
 * _strlen_recursion - function returns length of a string.
 * @s: pointer of string
 * Return: n, lenth of string
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s == '\0')
		return (0);

	n = 1 + _strlen_recursion(s + 1);
	return (n);
}
