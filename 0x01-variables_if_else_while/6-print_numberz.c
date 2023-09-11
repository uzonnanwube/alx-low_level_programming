#include <stdio.h>
/**
 * main - print alphabets without char and use putchar
 *
 * Return:  0 (Success)
 *
*/
int main(void)
{
	int alphabets = '0';
	
	while (alphabets <= '9')
	{
		putchar (alphabets);
		alphabets++;
	}	
	putchar ('\n');
	return (0);
}
