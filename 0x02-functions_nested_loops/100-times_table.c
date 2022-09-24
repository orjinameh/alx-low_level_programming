#include "main.h"

/**
*print_times_table - primts table
*@n: number ti be printed
*/

void print_times_table(int n)
{
	int x_axis, y_axis, inc;
	char pn;

	if (n < 16 && n >= 0)
	{
		inc = 0;

		for (x_axis = n; x_axis >= 0; x_axis--)
		{
			pn = '0';

			for (y_axis = n; y_axis >= 0; y_axis--)
			{
				if (pn < '9')
					_putchar(pn);
				if (y_axis > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (y_axis <= 9)
						_putchar(' ');
					if (y_axis <= 99)
						_putchar(' ');
				}
				pn += inc;
			}
			_putchar('\n');
			inc += 1;
		}
	}
}
