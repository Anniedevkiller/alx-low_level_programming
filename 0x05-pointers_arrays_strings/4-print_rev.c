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
	char *ptr = s;

        while (*ptr != '\0')
        {
                longi++;
                ptr++;
        }
        for(k = longi; k >= 0; k--)
        {
                char c = *(s + k);

		_putchar(c);
        }
                _putchar('\n');
}
