#include "main.h"
#include <stdio.h>

/**
 * main - Test the print_string function
 *
 * Return: Always 0
 */
int main(void)
{
char *str1 = "Hello, World!";
char *str2 = "Non-printable: \x01\x02\x03";
char *str3 = ""; /* Empty string */

printf("String 1: \n");
_printf("%S\n", str1);

printf("String 2: \n");
_printf("%S\n", str2);

printf("String 3: \n");
_printf("%S\n", str3);

return (0);
}
