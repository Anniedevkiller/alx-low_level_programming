#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*i)
	{
		j = needle;
		i = haystack;
		while (*j)
		{
			if (*i == *j)
			{
				j++;
				i++;
			}
			else 
				break;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
