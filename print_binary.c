#include "main.h"

/**
 * print_binary - Helper function to print an integer in binary
 * @num: Integer to be printed in binary
 *
 * Return: Number of binary digits printed
 */
int print_binary(unsigned int num)
{
	int count = 0;
	int include = 0;
	int i;
	char buffer[32];
	/* Check if number is Zero */
	if (num == 0)
	{
		count += _putchar('0');
	}
	else
	{
		/* Convert integer to binary and reverse */
		do {
			buffer[include++] = (num % 2) + '0';
			num /= 2;
		} while (num > 0);
		/* Print binary numbers */
		for (i = include - 1; i >= 0; i--)
		{
			count += _putchar(buffer[i]);
		}
	}

	return (count);
}
