#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number in the specific format
 * @n: the int to check
 * Return: 1 if n is greater than zero, 0 if n is zero,
 *         -1 if n is less than zero
 */
int print_sign(int n)
{
	char sign;
	int abs_n;

	if (n > 0)
	{
		sign = '+';
		abs_n = n;
	}
	else if (n == 0)
	{
		sign = '0';
		abs_n = 0;
	}
	else
	{
		sign = '-';
		abs_n = -n;
	}

	putchar(sign);
	putchar(',');
	putchar(' ');
	putchar(abs_n / 10 + '0');
	putchar(abs_n % 10 + '0');
	putchar('\n');

	return (n > 0 ? 1 : (n == 0 ? 0 : -1));
}
