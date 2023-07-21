#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);
	if (separator = NULL)
		separator = "";

	for (i = 1; i < n; i++)
	{
		str = va_arg(strs, char*);

		if (str == NULL)
			printf("(nil)%s", separator);
		else 
			printf("%s%s", str, separator);
	}
	if (n > 0)
	{
		str = va_arg(strs, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(strs);

	printf("\n");
}
