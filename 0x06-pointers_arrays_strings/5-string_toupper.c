#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function changes lowercase of a string to uppercase.
 * @a: pointer of string.
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (a[1] > 96 && a[1] < 123)
			a[1] -= 32;
	}
	return (a);
}
