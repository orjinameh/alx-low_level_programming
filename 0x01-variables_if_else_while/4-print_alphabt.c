#include <stdio.h>

/**
*main-print lowercase alpha a-z but remove 'q' and 'e'
*Return: always o (Success)
*/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');

	return(0);
}
