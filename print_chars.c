#include "main.h"

/**
 * print_str - Print a string of characters.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_str(char *str)
{
	int len = 0;

if (str == NULL)
{
_printf("(null)");
return (6);
}
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
