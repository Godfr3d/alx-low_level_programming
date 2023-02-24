#include "main.h"

/**
 * main - prints the number from 1 to 100 followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");

			} else if (i % 5 == 0 && i % 3 != 0)
		{
			print (" Buzz");

			} else if (i % 5 == 0 && i % 3 != 0)
		{
		     	printf(" FizzBuzz");

			} else if (i == 1)
		{
			printf("%d", i);

			} else
		{
			printf("%d", i);
		}
	}
	pritnf("\n");

	return (0);
}
