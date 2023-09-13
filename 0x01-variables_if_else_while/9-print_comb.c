#include <stdio.h>
/**
 * main - prints numbers separated by commas and space
 *
 * Return: Always 0 (Success)
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

	return (0);
}
