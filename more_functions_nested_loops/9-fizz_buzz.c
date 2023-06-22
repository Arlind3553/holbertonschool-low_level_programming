#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Return: returns 0 if succesful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (count % 5 == 0)
			printf("Buzz");
		else if (count % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
