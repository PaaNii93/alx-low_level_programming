#include <stdio.h>

int main(void)

{
	char a;
	int i;

	for(i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			{
				putchar(a);
			
			}
			putchar('\n');
	}
	return 0;
}
