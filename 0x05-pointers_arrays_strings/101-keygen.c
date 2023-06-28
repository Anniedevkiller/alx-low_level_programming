#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * program that generates random valid
 * password for the program 101-crackme
 * Return 0
 */
int main(void)
{
	int pass[100];
	int v, sum, m;

	sum = 0;

	srand(time(NULL));

	for (v = 0; v < 100; v++)
	{
		pass[v] = rand() % 78;
		sum += (pass[v] + '0');
		putchar(pass[v] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
