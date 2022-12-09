#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by new line
* Return: Always (0) success
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
