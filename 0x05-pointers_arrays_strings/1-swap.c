#include "main.h"

/**swap integer - the values of two intgers
 * @a: int
 * @b: int 
 * swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

