#include "main.h"
/**
 * print_int - prints integer using the putchar function
 * @value: this parameter accepts the value to be printed
 */
void print_int(int value)
{
	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}
	if (value != 0)
	{
		print_int(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 * integer - print an integer in base 10
 * @val: the value to be printed
 * Return: Always zero
 */
int integer(va_list val)
{
	int i;

	i = va_arg(val, int);
	print_int(i);
	return (0);
}
