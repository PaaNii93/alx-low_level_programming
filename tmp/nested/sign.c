#include <stdio.h>

int main(void)

{
	int n = 8;

	if (n > 0)
	{
		putchar('+');
		putchar('\n');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('\n');
		return 0;
	}
	else
		{
		putchar('-');
		putchar('\n');
		return -1; 
	}
} 
