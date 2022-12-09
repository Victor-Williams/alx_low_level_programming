#include <stdio.h>

/**
 * main - prints all digitsi of base ten
 * starting from zero
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	printf("\n");
	return (0);
}
