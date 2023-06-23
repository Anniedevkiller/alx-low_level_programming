#include <stdio.h>

/**
 * main - print the numbers from 1 to 100, followed by
 * but for multiply of three prints Fizz instead of the 
 * and for the muitiply of five print Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 ==0 && i % 5 !=0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if ( i == 1)
		{
			printf("%d" , i);
		} else 
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	
	return(0);
}
