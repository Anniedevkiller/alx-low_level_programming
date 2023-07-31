#include "main.h"

/**
 * function : that return the natural square root of a numbeer[
 */
int sqrtfinder(int on, int off, int n)
{
	long a;

	if (off >= on)
	{
		a = on +(off - on)
			/ 2;
		if (a * a == n)
			return (a);
		if (a * a > n)
			return (sqrtfinder(on, a - 1, n));
		if (a * a < n)
			return (sqrtfinder(a + 1, off, n));
	}
	return(-1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrtfinder(2, n, n));
}
