#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}

	putchar('\n');

	return (0);
}
