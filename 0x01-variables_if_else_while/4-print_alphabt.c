#include <stdio.h>

/**
 * main - prints other alphabets in lowercase
 * except Q and E
 * Return: Always 0
 *
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}

	putchar('\n');

	return (0);

}
