#include "main.h"

/**
 * a funtion that copies the string points arrays
 * return string
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int x = 0;

	while ((*src + b) != '\0')
	{
		b++;
	}
	for ( ; x < b ; x++)
	{
		dest[x] = src[x];
	}
	dest[b] = '\0';
	return (dest);
}
