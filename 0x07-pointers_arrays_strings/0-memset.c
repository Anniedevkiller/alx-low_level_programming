#include "main.h"
/**
 * fill a block of memory with a specific value
 * Return: changed array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i ++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
