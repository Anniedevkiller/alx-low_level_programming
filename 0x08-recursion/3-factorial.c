#include "main.h"
/**
 * function that return the factorial of a given number
 * int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}	
