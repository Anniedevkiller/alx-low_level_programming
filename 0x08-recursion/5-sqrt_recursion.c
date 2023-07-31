#include "main.h"
#include <stdio.h>
/**
 * function : that return the natural square root of a numbeer[
 */
int _sqrt_recursion(int n)
{
        if (n % 2 != 0)
	{
	return (-1);
	}
    else if (n > 1)
    {
        return (n / 2 * (_sqrt_recursion(n / 2)));
    }
  else if (n == 1)
  {
  return (1);
  }
}  
