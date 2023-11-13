#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - this is a custom printf function
 * @format: With a format string
 *
 * Return: To return number of characters printed(excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int include;

	include = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			switch (*(format + 1))
			{
			case 'c': /* This is for handling the character specifier */
				include += _putchar(va_arg(args, int));
				break;
			case 's': /* This is for handling the string specifier */
				include += _puts(va_arg(args, char *));
				break;
			case '%': /* This is for handling the percent specifier */
				include += _putchar('%');
				break;
			default: /* Handle unknown specifier prints '%' and next character */
				include += _putchar('%');
				include += _putchar(*(format + 1));
			}
			format += 2; /* To move to the next format specifier in the code */
		}
		else
		{
			include += _putchar(*format); /* To print non-format characters */
			format++;
		}
	}

	va_end(args);

	return (include);
}

/**
 * _putchar - This is for writing a character to stdout
 * @c: This is the printed character
 *
 * Return: This should return 1 on success or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - This is for writing a string to stdout
 * @str: This is the printed string
 *
 * Return: This returns the number of characters written
 */
int _puts(char *str)
{
	int include = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		include += _putchar(*str); /* To print characters in the string */
		str++;
	}

	return (include);
}
