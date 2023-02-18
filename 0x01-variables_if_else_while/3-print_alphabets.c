#include <stdio.h>
/**
 * main -print the alphabet in lowercase and then in upper case, then \n
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (a);
}
