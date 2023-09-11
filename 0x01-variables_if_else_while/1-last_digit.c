#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: All the time 0 (Success)
 * 
 */
int main(void)
{
	int n;
	
	int u;

	srand(time(0));
	n = rand () - RAND_MAX/2;
	u = n & 10;
	if (u>6)
		printf("last digit of %d is %d and is greater than 6\n", n, u);
	if (u ==0)
		printf("last digit of %d is %d and is 0\n", n, u);
	if (u<6 && u !=0)
		printf("last digit of %d is %d and is less than 7 and not 0\n", n, u);
	return (0);
}
	    	
	
	

