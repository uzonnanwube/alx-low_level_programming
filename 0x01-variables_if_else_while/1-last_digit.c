#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigns a random number to the variable n each time it is executed
 *
 * Return: All the time 0 (Success)
 *
*/
int main(void)
{
	int n;

	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;

	if (u > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, u);
	}
	else if (u == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, u);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, u);
	}
	return (0);
}
