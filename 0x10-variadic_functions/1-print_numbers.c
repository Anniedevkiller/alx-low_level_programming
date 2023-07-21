#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	if (separator == NULL )
		separator = "";

	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		printf("%s", separator);
	}
	if (n > 0)
		printf("%i", va_arg(nums, unsigned int));
	va_end(nums);

	printf("\n");
}
