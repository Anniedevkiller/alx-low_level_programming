#include "main.h"
/**
 * function : that return the length of a string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;
	
	if (*s)
	{
		longit++;
		longit +=
_strlen_recursion(s + 1);
	}
	return (longit);
}
