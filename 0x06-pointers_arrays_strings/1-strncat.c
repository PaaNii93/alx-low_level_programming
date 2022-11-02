#include "main.h"
#include <string.h>

/**
 * _strncat - funtion append strings.
 * @dest: destination string.
 * @src: source string.
 * @n: bytes from src to append to dest.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
