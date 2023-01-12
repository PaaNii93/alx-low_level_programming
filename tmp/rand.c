#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int ldigit;
	
	srand(time(0));
	n = rand();
	ldigit = n % 10;

	printf("%d is the last digit of %d\n", ldigit, n);
	
	return 0;
}


