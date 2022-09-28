#include "main.h"

/**
 * find_sqrt - returns the natural square root of a number
 * @num: The number to find the square root of
 * @root: The root to be tested
 *
 * Return: the square root or 1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
