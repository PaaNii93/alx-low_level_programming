#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function reverses the content of an array.
 * @a: pointer for array.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int rev;

	(i = 0; i < n; i++)

	while (i < n)
	{
		rev = a[i];
		a[i] = a[n - 1];
		rev = a[n - 1];
