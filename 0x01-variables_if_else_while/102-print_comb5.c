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
	int thou;

	for (thou = '0'; thou <= '9'; thou++)
	{
		for (hundreds = '0'; hundreds <= '9'; hundreds++)
		{
			for (tens = thou; tens <= '9'; tens++)
			{
				for (units = (hundreds + 1); units <= '9'; units++)
				{
					putchar(thou);
					putchar(hundreds);
					putchar(' ');
					putchar(tens);
					putchar(units);

					if (!((thou == '9' && hundreds == '8') && (tens == '9' && units == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
