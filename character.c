#include "main.h"
/**
 * character - print a single character
 * @val: value to be printed
 */
int character(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
