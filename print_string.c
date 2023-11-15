#include "main.h"

/**
 * print_string - Helper function to print a string with special handling
 * @str: String to be printed
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			if (*str == '\n' || *str == '\t' || *str == '\r' || *str == '\0')
			{
				count += _putchar('\\');
				count += _putchar(
						*str == '\n' ? 'n' : (*str == '\t' ? 't' : (*str == '\r' ? 'r' : '0')));
			}
			else
			{
				count += _putchar(*str);
			}
		}
		else
		{
			count += _printf("\\x%02X", (unsigned char)*str);
		}
		str++;
	}

	return (count);
}
