#include "main.h"

/**
 * print_pointer - Prints a pointer address
 * @addr: Pointer address to be printed
 *
 * Return: Number of characters printed
 */
int print_pointer(void *addr)
{
int include = 0;
char hex_chars[] = "0123456789abcdef";
unsigned long ptr_val;
int print_digits = 0;
int shift;
char digit;

if (addr == NULL)
{
_printf("(nil)");
return (5);
}

ptr_val = (unsigned long)addr;
_putchar('0');
_putchar('x');
include += 2;

shift = sizeof(void *) * 8 - 4;
while (shift >= 0)
{
digit = hex_chars[(ptr_val >> shift)&0xF];

if (digit != '0' || print_digits)
{
_putchar(digit);
include++;
print_digits = 1;
}

shift -= 4;
}

if (include == 2)
{
_putchar('0');
include++;
}

return (include);
}

/**
 * print_unknown - Prints an unknown specifier
 * @specifier: Unknown specifier to be printed
 *
 * Return: Number of characters printed
 */
int print_unknown(char specifier)
{
	_putchar('%');
	_putchar(specifier);
	return (2);
}
