#include "main.h"
/**
 *
 *
 */
int _37(va_list val)
{
	char percent;

	percent = va_arg(val, int);
	percent = '%';
	_putchar(percent);
	return (1);
}
