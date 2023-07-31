#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}


int is_palid_rec(char *s, int b, int c)
{
	if ( b == c)
		return (1);
	if (b == c - 1)
		return(s[b] == s[c]);
	if (s[b] != s[c])
		return (0);
	return (is_palid_rec(s, b + 1, c - 1));
}
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l == 0 || *s != s[l - 1])
		return (0);
	return (is_palid_rec(s, 0, l -1));
}
