#include "main.h"

/**
 * strlen_no_wilds - function that returns the length of a string
 * @str: The string to be measured
 *
 * Return: The length of a string
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}
