#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 98)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
