#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 98;
	
        if (a >= 0 && a <= 9)
        {
                printf("%d", a);
        }
        else
        {
                printf("%d", abs(a % 10));
        }
        putchar ('\n');
        return (0);
}
