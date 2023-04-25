#include "main.h"

/**
 * _printf - A function that replicates the standard library printf.
 * @format: Pointer to a string.
 * Return: Vaue of of printf
 */

int _printf(const char *format, ...)
{
	unsigned int h = 0, r_value = 0;
	int r_val;
	va_list args;

	va_start(args, format);

	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			_putchar(format[h]);
		}
		else if (format[h + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 's')
		{
			r_val = put_s(va_arg(args, char *));
			h++;
			r_value += (r_val - 1);
		}
		else if (format[h + 1] == '%')
		{
			_putchar('%');
			h++;
		}
		r_value += 1;
	}
	return (r_value);

}
