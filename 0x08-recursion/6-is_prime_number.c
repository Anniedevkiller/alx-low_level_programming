#include "main.h"

int sqrtof(int a, int b)
{
	if (a <= 0)
		return (-1);
	if (a * a == b)
		return (a);
	return (sqrtof(a -1, b));
}

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqrtof(n / 2, n));
}


int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == 1)
		return (1);
	return (_sqrt_recursion(n));
}
