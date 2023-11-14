#include "main.h"

/**
 * print_char - Print a single character.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed (always 1).
 */
int print_char(char c)
{
	return (_putchar(c));
}

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
		print_char(str[len]);
		len++;
	}
	return (len);
}
