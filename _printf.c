#include "main.h"
/**
 * _printf - print to stout formated text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int z, r_count, count = 0;
	va_list args;

	va_start(args, format);

	for (z = 0; format[z] != '\0'; z++)
	{
		if (format[z] != '%')
		{
			putchr(format[z]);
		}
		else if (format[z + 1] == 'c')
		{
			putchr(va_arg(args, int));
			z++;
		}
		else if (format[z + 1] == 's')
		{
			r_count = putss(va_arg(args, char *));
			z++;
			count += (r_count - 1);
		}
		else if (format[z + 1] == '%')
		{
			putchr('%');
			z++;
		}
		else if ((format[z + 1] == 'd') || (format[z + 1] == 'i'))
		{
			get_integer(va_arg(args, int));
			z++;
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
