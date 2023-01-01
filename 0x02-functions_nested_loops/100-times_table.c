#include "main.h"
#include <stdio.h>

int main(void)
{
	int m;
	int k;
	int n;

	if(n <= 15)
	{
		for(k = 0; k <= n; k++)
		{
			for(m = 0; m <= n; m++)
			{
				printf("%d, ", (k * m));
			}
			putchar('\n');
		}
	}
	else 
		{
			(n < 0);
			(n > 15);
			return 0;
		}
}
