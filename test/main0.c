#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point for testing _printf function
 *
 * Return: Always 0
 */
int main(void)
{
_printf("My first Printf statement.\n");
	_printf("Character: [%c]\n", 'T');
	_printf("String: [%s]\n", "I am a string!");
	_printf("Percent: [%%]\n");

	return (0);
}
