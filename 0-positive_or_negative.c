#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
 * [main](https://www.google.com/search?q=main) - Entry point
 *
 * Description: This program generates a random number and
 *              prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
