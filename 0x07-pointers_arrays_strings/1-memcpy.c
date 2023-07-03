#include "main.h"
/**
 * _memcy -
 * a function that copies memory area
 * Return : copied memory with n bytyec changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
