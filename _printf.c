#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: the format string.
 * @...: an ellipsis
 * Return: include
 */
int _printf(const char *format, ...)
{
	va_list list_args;
	int i = 0, include = 0;

	va_start(list_args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			include += _putchar('%');
			i += 2;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			include += handle_format_specifier(format[i], list_args);
		}
		else
		{
			include += _putchar(format[i]);
		}

		i++;
	}

	va_end(list_args);
	return (include);
}

/**
 * handle_format_specifier - Handles the logic for each format specifier.
 * @specifier: The format specifier to handle.
 * @list_args: The va_list containing the arguments for format substitution.
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
		case 'r':
			return (print_unknown('r'));
		case 'b':
			return (print_binary(va_arg(list_args, unsigned int)));
		case 'S':
			return (print_string(va_arg(list_args, char *)));
		default:
			return (print_unknown(specifier));
	}
}
