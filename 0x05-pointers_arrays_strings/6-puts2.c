 #include "main.h"

/**
 * puts2 - as function to print only one character out
 * starting with first character
 * followin new lines
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int lens = 0;
	int m = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lens++;
	}
	m - lens - 1;
	for ( o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
	
