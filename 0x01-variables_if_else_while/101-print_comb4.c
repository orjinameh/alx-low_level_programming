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

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++)
		{
			for (units = (tens + 1); units <= '9'; units++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(units);

				if (!(hundreds == '7' && units == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
