/**
 * string - prints the string
 * @val: the value string
 * Return: returns 1
 */

#include "main.h"
int string(va_list val)
{
	int k;
	char *str;

	str = va_arg(val, char *);
	if (!str)
	{
		str = "(nil)";
	}
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	return (1);
}
