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
			include += _putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
				include += _putchar('%');
			else if (*format == 'c')
				include += _putchar(va_arg(list_args, int));
			else if (*format == 's')
				include += print_str(va_arg(list_args, char *));
			else if (*format == 'd' || *format == 'i')
				include += print_int(va_arg(list_args, int));
			else if (*format == 'u')
				include += print_uint(va_arg(list_args, unsigned int));
			else if (*format == 'o')
				include += print_octal(va_arg(list_args, unsigned int));
			else if (*format == 'x' || *format == 'X')
				include += print_hex(va_arg(list_args, unsigned int), (*format == 'X'));
			else if (*format == 'p')
				include += print_pointer(va_arg(list_args, void*));
			else if (*format == 'r')
				include += print_unknown('r');
			else if (*format == 'b')
				include += print_binary(va_arg(list_args, unsigned int));
			else if (*format == 'S')
				include += print_string(va_arg(list_args, char *));
		} format++;
	} va_end(list_args);
	return (include);
}
