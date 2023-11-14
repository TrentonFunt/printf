#include "main.h"

/**
 * print_binary - Helper function to print an integer in binary
 * @num: Integer to be printed in binary
 *
 * Return: Number of binary digits printed
 */
int print_binary(unsigned int num)
{
	int include = 0;

	if (num == 0)
	{
		include += _putchar('0');
	}
	else
	{
		while (num > 0)
		{
			_putchar((num % 2) + '0');
			num /= 2;
			include++;
		}
	}

	return (include);
}
