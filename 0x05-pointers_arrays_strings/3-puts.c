#include "main.h"

/**
 *_string - in reverse by new line
 * prints a string
 */
void _strings(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
