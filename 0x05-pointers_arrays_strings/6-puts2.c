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
	int k = 0;
	int j = 0;
	char *y = str;
	int h;

	while (*y != '\0')
	{
		y++;
		k++;
	}
	j = k - 1;
	for (h = 0; h <= j; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
