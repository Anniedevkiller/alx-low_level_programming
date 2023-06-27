#include "main.h"
/**
 * _rev - print a string in reverse by new line
 * @s: string
 * Return : 0
 */
void _rev(char *s)
{
	int longi = 0;
	int k;
	
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for(k = longi; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
