#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j;
	char tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10 + '0';
			ones = j % 10 + '0';

			if (j >= 10)
				_putchar(tens); /* first _putchar call */
			_putchar(ones);    /* second _putchar call */
		}
		_putchar('\n'); /* third _putchar call */
	}
}
