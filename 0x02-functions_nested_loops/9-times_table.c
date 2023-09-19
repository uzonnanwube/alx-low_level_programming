#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, answer;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			answer = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (answer < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (answer / 10));
				}

				_putchar('0' + (answer % 10));
			}
		}
		_putchar('\n');
	}
}
