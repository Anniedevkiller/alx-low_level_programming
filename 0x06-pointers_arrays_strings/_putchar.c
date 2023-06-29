#include "main.h"
#include <unistd.h>

/**
 * main entry of putchar
 *
 * return on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
