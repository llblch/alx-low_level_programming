#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@i: parameter
*Return:returns nothing
*/

void print_line(int i)
{
	while (i-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
