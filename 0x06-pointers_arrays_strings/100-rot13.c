#include "main.h"
/**
 * encoder
 * user input
 * return coded
 */
char *rot13(char *s)
{
	int i, j;
	char k[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l[] ="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] ==k[j])
			{
				s[i] = l [j];
				break;
			}
		}
	}
	return (s);
}
