#include "main.h"
#include <stdio.h>

/**
 * funtion that prints element of an array
 * return a and inputs
 */
void print_array(int *a, int n)
{
	int h;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d" , a[0]);

	for (h = 1; h < n; h ++)
	{
		printf(", %d" , a[h]);
	}
	printf("\n");
}
