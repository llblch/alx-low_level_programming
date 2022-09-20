#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints out the first half of a string
 * @str: input string to print.
 *
 * Return: returns 0
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
