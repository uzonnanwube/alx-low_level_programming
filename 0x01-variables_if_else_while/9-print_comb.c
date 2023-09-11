#include <stdio.h>
/**
 * main - print numbers separated by commas & space
 *
 * Return: only 0 (Success)
 *
*/
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{ 	
		putchar(numbers);
		if (numbers <= '8')
		{	
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return(0);
}	



	
