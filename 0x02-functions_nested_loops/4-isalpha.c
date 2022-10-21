#include "main.h"

/**
 * _isalpha - entry point.
 * Description: Return 1 if c is a  letter, both lowercase and uppercase.
 * @c: is unassigned int to be compared with ASCII value.
 * Return: 0 (success)
 **/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
