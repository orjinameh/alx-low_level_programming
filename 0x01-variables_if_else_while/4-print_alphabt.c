#include <stdio.h>
/**
*main - entry point
*
*Return: alway returns 
*
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}

	putchar('\n');

	return (0);
}
