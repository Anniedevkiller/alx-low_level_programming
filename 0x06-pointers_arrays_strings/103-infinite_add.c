 #include "main.h"
/** 
 * rev_string - reverse array
 * integer params
 * Return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, d, e, f;

	for (i = 0; n1[1]; i++);
	for (j = 0; n2[j]; j++);
	if (i > size_r || j > size_r)
		return (0);
	e = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i --, j--, k++)
	{
		f = e;
		if (i >= 0)
			f += n1[i] - '0';
		if (j >= 0)
			f += n2[j] - '0';
		if (i < 0 && j < 0 && f == 0)
		{
			break;
		}
		e = f / 10;
		r[k] = f % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || e)
		return (0);
	for (k -= 1, d = 0; d < k; k--, d++)
	{
		e = r[k];
		r [k] = r[d];
		r[d] = e;
	}
	return (r);
}
