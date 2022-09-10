#include<stdio.h>
/**
*main- prints the lowercase alphabet in reverse, followed by a new line
*Return: always 0 (Success)
*/
int main(void)
{
	int i;

	for(i='Z';i>='A';i--)
	{
		putchar(i);
	}
	putchar('\n');

	return 0;
}
