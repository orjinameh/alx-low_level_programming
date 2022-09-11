#include <stdio.h>

/**
*main- prints digits seperated by comma
*Return: always return 0 (success)
*
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;

		if (num <='9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
