#include "main.h"

/**
 * print_string - Helper function to print a string with special handling
 * @str: String to be printed
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int counter = 0;
	/* Loop to check each character in given string */
	while (*str != '\0')
	{
	  /* Check if the character can be printed in ASCII format */
		if (*str >= 32 && *str < 127)
		{
			/* Code to handle special characters */
			if (*str == '\n' || *str == '\t' || *str == '\r' || *str == '\0')
			{
				counter += _putchar('\\');
				counter += _putchar(
						*str == '\n' ? 'n' : (*str == '\t' ? 't' : (*str == '\r' ? 'r' : '0')));
			}
			else
			{
				counter += _putchar(*str);
			}
		}
		else
		{
			/* Print non-printable ASCII */
			counter += _printf("\\x%02X", (unsigned char)*str);
		}
		str++;
	}

	return (counter);
}
