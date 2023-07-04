#include "main.h"
#include <stddef.h>
/*
 * main entry
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;
	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
		return (&s[a]);
		}
	}
	return (NULL);
}	
