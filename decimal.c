#include "main.h"
/**
 * print_int - prints integer using the putchar function
 * @value: this parameter accepts the value to be printed
 */
void print_dec(int value)
{
	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}
	if (value != 0)
	{
		print_dec(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 * decimal - print a decimal (base 10) number
 * @val: the value to be printed
 * Return: Always zero
 */
int decimal(va_list val)
{
	int d;

	d = va_arg(val, int);
	print_dec(d);
	return(0);
}
