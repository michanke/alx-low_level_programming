#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @a: the number to be checked
 * Return: Value of the last digit of the number
 */

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
