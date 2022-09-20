#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints out the first half of a string
 * @str: input string to print.
 *
 * Return retunrs 0
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
