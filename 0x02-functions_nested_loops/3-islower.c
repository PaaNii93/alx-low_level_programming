#include "main.h"

/**
 * _islower - entry point.
 *
 * Description: checks if a character is lowecase.
 *
 * @a: the value to be compared to the ASCII value.
 *
 * Return: 0 (success)
 **/

int _islower(int a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}
