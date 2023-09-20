#include "main.h"
/*
 * _printf - print to stout formated text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
        unsigned int i, count = 0;
        va_list args;
        va_start(args, format);

        for (i = 0; format[i] != "\0"; i++)
        {
		if(format[i] != '%')
		{
			putchar(format[i]);
		}
        }


}
