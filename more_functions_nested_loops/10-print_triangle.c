#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, prints only a newline.
 * Each row of the triangle is right-aligned, ending with a newline.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print leading spaces */
		for (col = 0; col < size - row; col++)
			_putchar(' ');

		/* Print '#' characters */
		for (col = 0; col < row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
