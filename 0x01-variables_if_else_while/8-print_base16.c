#include <stdio.h>
/**
 * main - prints number in base 16
 * Return: Always 0
 *
 */

int main(void)
{
	int nu;
	char ke;

	for (nu = 0; nu < 10; nu++)
		putchar((nu % 10) + '0');

	for (ke = 'a'; ke <= 'f'; ke++)
		putchar(ke);

	putchar('\n');

	return (0);
}
