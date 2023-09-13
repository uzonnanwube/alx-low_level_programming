#include <stdio.h>
/**
 * main - prints alphabets in lower case a-z
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
