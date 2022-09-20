#include <stdio.h>
#include "main.h"

/**
 * _strlen - Prints out the first half of a string
 * @s: input string to print.
 *
 * Return: retunrs 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
