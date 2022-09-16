#include "main.h"
/**
 * print_square - Print a square of single characters
 * @n : the number n x n of the square
 * Constraints -  use _putchar to print and use
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

