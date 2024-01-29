int _printf(const char const *format, ...)
{
	convert_to s;
	unsigned int i, k, j = 0;
	char *str;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		else if (format[i + 1] == '%')
		{
			putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			for (k = 0; str[k] != '\0'; k++)
			{
				putchar(str[k]);
			}
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			print_int(va_arg(args, int));
			i++;
		}

		j += 1;
	}
	va_end(args);
	return(j);
}
