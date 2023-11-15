#include "main.h"

/**
 * print_reversed_string - Helper function to print a reversed string
 * @str: String to be printed
 *
 * Return: Number of characters printed
 */
int print_reversed_string(char *str)
{
int count = 0;
int length = 0;

// Calculate the length of the string
while (str[length] != '\0')
{
    length++;
}

// Print the string in reverse order
for (int i = length - 1; i >= 0; i--)
{
    count += putchar(str[i]);
}

return count;
}
