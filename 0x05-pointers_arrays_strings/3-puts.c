#include "main.h"

/**
 *_string - in reverse by new line
 * prints a string
 */
void _puts(char *str)
{
	int z;

	for (z = 0;*(str + z) != '\0'; z++)
	{
		_putchar(*(str + z));
	}
	_putchar('\n');
}
