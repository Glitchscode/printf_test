#include "main.h"
/**
 * _37 - prints the percentage sign
 * @val: value to be printed
 * Return: returns 1
 */
int _37(va_list val)
{
	char percent;

	percent = va_arg(val, int);
	percent = '%';
	_putchar(percent);
	return (1);
}
