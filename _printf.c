#include "main.h"

/**
 * _printf - Custom printf function that handles a subset of format specifiers.
 * @format: Format string containing directives.
 * @...: Variable number of arguments for format substitution.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int include = 0;
	va_list list_args;

	if (format == NULL)
		return (-1);

	va_start(list_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			include += _putchar(*format);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			include += handle_format_specifier(*format, list_args);
		}

		format++;
	}

	va_end(list_args);
	return (include);
}

/**
 * handle_format_specifier - Handles the logic for each format specifier.
 * @specifier: The format specifier to handle.
 * @list_args: The list of arguments for format substitution.
 *
 * Return: The number of characters printed for the given specifier.
 */
int handle_format_specifier(char specifier, va_list list_args)
{
	switch (specifier)
	{
		case '%':
			return (_putchar('%'));
		case 'c':
			return (_putchar(va_arg(list_args, int)));
		case 's':
			return (print_str(va_arg(list_args, char *)));
		case 'd':
		case 'i':
			return (print_int(va_arg(list_args, int)));
		case 'u':
			return (print_uint(va_arg(list_args, unsigned int)));
		case 'o':
			return (print_octal(va_arg(list_args, unsigned int)));
		case 'x':
		case 'X':
			return (print_hex(va_arg(list_args, unsigned int), (specifier == 'X')));
		case 'p':
			return (print_pointer(va_arg(list_args, void *)));
		case 'v':
			return (print_unknown('v'));
		case 'b':
			return (print_binary(va_arg(list_args, unsigned int)));
		case 'S':
			return (print_string(va_arg(list_args, char *)));
		case 'r':
			return (print_reversed_string(va_arg(list_args, char *)));
		default:
			return (print_unknown(specifier));
	}
}
