#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == 'J' || i == 'M')
			break;
		putchar(i);
	}
	putchar('\n');

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == 'e' && j == 'i')
			break;
		putchar(j);
	}
	putchar('\n');
 
	return (0);
}
