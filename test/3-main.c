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
char *str3 = "Mixed: Hello\x07World\x0D!";
char *str4 = "Special: \x1F\x7F\xA5";
char *str5 = "";
char *str6 = "\x01\x02\x03\x04";
char *str7 = "Hello  World";
char *str8 = "Special: !@#$%^&*()";

printf("String 1: ");
_printf("%S\n", str1);

printf("\nString 2: ");
_printf("%S\n", str2);

printf("\nString 3: ");
_printf("%S\n", str3);

printf("\nString 4: ");
_printf("%S\n", str4);

printf("\nString 5: ");
_printf("%S\n", str5);

printf("\nString 6: ");
_printf("%S\n", str6);

printf("\nString 7: ");
_printf("%S\n", str7);

printf("\nString 8: ");
_printf("%S\n", str8);

return (0);
}
