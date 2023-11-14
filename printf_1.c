#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	char *qtr;
	char c;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'c': /* For the character conversion specifier */
					c = va_arg(args, int); /* Retrieve a character argument */
					write(1, &c, 1);
					break;
				case 's': /* For the String conversion specifier */
					qtr = va_arg(args, char *);
					while (*qtr)
						write(1, qtr++, 1); /* Write string to standard output */
					break;
				case '%': /* For the percentage specifier */
					write(1, "%", 1); /* Write '%' to standard output */
					break;
			}
		}
		else
		{
			write(1, format, 1); /* Write the current character to standard output */
		}
		counter++;
		format++;
	}
	va_end(args);

	return (counter); /* Return the total number of characters printed */
}
