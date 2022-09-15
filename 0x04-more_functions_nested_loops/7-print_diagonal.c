#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @i: parameter
 * Return: returns 0
 */

void print_diagonal(int i)
{
	int len, space;

	if (i > 0)
	{
		for (len = 0; len < i; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == (i - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
}
