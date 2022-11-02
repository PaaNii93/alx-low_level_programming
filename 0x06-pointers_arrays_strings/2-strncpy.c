#include "main.h"
#include <string.h>

/**
 * _strncpy - function copies strings.
 * @dest: destination string.
 * @src: source string.
 * @n: bytes of source string to copy.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
