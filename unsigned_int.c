#include "main.h"
/**
 *
 *
 */
/**
 * print_int - prints integer using the putchar function
 * @value: this parameter accepts the value to be printed
 */
void print_u(unsigned int value)
{
	unsigned int i = 0;

	if (value < i)
	{
		_putchar('-');
		value = -value;
	}
	if (value != i)
	{
		print_u(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 *
 *
 */
int unsigned_int(va_list val)
{
	unsigned int i;

	i = va_arg(val, unsigned int);
	print_u(i);
	return(1);
}
