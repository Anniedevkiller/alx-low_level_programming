#include <stdio.h>
/**
 * main - prints natuarl numbers below 1024 that are
 * multiply of 3 or 5 
 * return 0
 */
int main(void)
{
	int a, b;
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
