#include <stdio.h>

/**
*main- prints all possible different combinations of two digit
*Return: returns 0 always
*/

int main(void)
{
	int units;
	int tens;

	for (units = '0'; units <= '9'; units++)
	{
		for (tens = (units + 1); tens <= '9'; tens++)
		{
			putchar(units);
			putchar(tens);

			if (!(tens == '9' && units == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
