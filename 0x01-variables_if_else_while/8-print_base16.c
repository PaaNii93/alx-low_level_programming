#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0 (success).
 **/

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}
