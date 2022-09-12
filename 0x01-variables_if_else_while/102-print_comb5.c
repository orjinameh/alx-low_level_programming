#include <stdio.h>

/**
*main- prints all possible different combinations of two digit
*Return: returns 0 always
*/

int main(void)
{
	int units;
	int tens;
	int hundreds;
	int thousands;

	for (thousands = '0'; thousands <= '9'; thousands++)
	{
		for (hundreds = '0'; hundreds <= '9'; hundreds++)
		{
			for (tens = thousands; tens <= '9'; tens++)
			{
				for (units = (hundreds + 1); units <= '9'; units++)
				{
					putchar(thousands);
					putchar(hundreds);
					putchar(' ');
					putchar(tens);
					putchar(units);

					if (!((thousands == '9' && hundreds == '8') && (tens == '9' && units == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
