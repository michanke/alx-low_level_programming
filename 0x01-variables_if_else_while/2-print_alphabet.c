#include <stdio.h>
/**
 * main - print alphabets in lower case
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		putchar(ap);
	}
	putchar('\n');
	return (0);
}
