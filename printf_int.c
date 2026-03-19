#include "main.h"

/**
 * printf_int - handles %d and %i conversions
 * @n: given digit or integer to print
 *
 * Return: number of characters printed
*/

int printf_int(int n)
{
	int count = 0;
	unsigned int val;
	char digit;

	if (n < 0)
	{
		count += write(1, "-", 1);
		val = (unsigned int)(-n);
	}
	else
	{
		val = n;
	}

	if (val > 9)
	{
		count += printf_int(val / 10);
	}

	digit = (val % 10) + '0';
	count += write(1, &digit, 1);

	return (count);
}