#include "main.h"
/**
 *function : print a string
 * followes by a new line
 */
void _puts_recursion(char *s)
{
	if(*s) 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
