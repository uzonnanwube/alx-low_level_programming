#incliude <stdio.h>

/**
 * main - print first 50 Fibionacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	{
		sum = fib1 + fib2;
		print ("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if( count == 49)
			printf("\n");
		else
			printf(",");
	}

	return(0);
}
