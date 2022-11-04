#include "main.h"
#include <string.h>

/**
 * reverse_array - function reverses the content of an array.
 * @a: pointer for array.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < (n / 2); i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		rev = a[n - i - 1];
	}
}
