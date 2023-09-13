#include <stdio.h>
/**
 * main - prints alphabets except q and e
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
