#include "main.h"
/**
 * calculate length of a substring
 * string input
 * Return : int value
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int length;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++);
		if (s[a] == accept[b]) length++;
		if (accept[b] == '\0')
	
			return (length);
}
