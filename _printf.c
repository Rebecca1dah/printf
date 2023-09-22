#include "main.h"
/**
 * _printf - print to stout formated text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, r_count, count = 0;

	va_list args;

	va_start(args, format);


	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchr(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			r_count = putss(va_arg(args, char *));
			i++;
			count += (r_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
			i++;
		}
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
                {
                        get_integer(va_arg(args, int));
			i++;
                }
		count += 1;
	}

	va_end(args);
	return (count);

}
