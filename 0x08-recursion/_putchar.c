#include <unistd.h>
/**
 * main entry of the putchar
 * Return: successs 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
