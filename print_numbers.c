#include "main.h"
#include <stdio.h>

/**
 * print_int - Print an integer
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int(int num)
{
	int include = 0;
	int i;
	char buffer[12];

	if (num < 0)
	{
		buffer[include++] = '-';
		num = -num;
	}

	do {
		buffer[include++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	for (i = include - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (include);
}

/**
 * print_uint - Print an unsigned integer
 * @num: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_uint(unsigned int num)
{
	int include = 0;
	int i;
	char buffer[12];

	do {
		buffer[include++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	for (i = include - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (include);
}

/**
 * print_octal - Print an octal number
 * @num: The unsigned integer to be printed in octal format
 *
 * Return: The number of characters printed
 */
int print_octal(unsigned int num)
{
	int include = 0;
	int i;
	char buffer[12];

	do {
		buffer[include++] = num % 8 + '0';
		num /= 8;
	} while (num > 0);

	for (i = include - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (include);
}

/**
 * print_hex - Print a hexadecimal number
 * @num: The unsigned integer to be printed in hexadecimal format
 * @uppercase: Whether to use uppercase letters in hexadecimal (1) or not (0)
 *
 * Return: The number of characters printed
 */
int print_hex(unsigned int num, int uppercase)
{
	int include = 0;
	int i;
	char buffer[12];

	do {
		buffer[include++] = (num % 16 < 10) ?
		(num % 16 + '0') : (num % 16 - 10 + (uppercase ? 'A' : 'a'));
		num /= 16;
	} while (num > 0);

	for (i = include - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (include);
}
