#include "main.h"
/**
 * change all lowercase letters of a string to uppercase
 * input value
 * return success
 */
char *string_toupper(char *n)
{
	int i;
	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

