#include <stduio.h>
/**
 *main - print possible combination of two 2 digit numbers
 *
 * Return:returns zero at end
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 100; j++)
	{
		if (p > i)
		{
			putchar((i / 10) + '0');
			Putchar((i % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
