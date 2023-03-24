#include "main.h"

/**
 * times_table - function for printing timetable for 9
 *
 * n = row, a = column, r = digit
 *
 * Return: times table
 */

void times_table(void)
{
	int n, a, r;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (a = 0; a <= 9; a++)
		{
			r = (n * a);
			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');
			if (a < 9)
			{
				_putchar(',');
				_putchar(',');
			}
		}
	}
}

