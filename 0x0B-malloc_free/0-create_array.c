#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (ptr == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
