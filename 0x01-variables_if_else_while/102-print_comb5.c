#include <stdio.h>

/**
*main- prints all possible different combinations of two digit
*Return: returns 0 always
*/

int main()

{

    char alpha;

    char alpha2;

    char alpha3;

    char alpha4;

    for (alpha4 = '0'; alpha4 <= '9'; alpha4++)

    {

        for(alpha3 = '0'; alpha3 <= '9'; alpha3++)

        {

            for(alpha2 = alpha4; alpha2 <= '9'; alpha2++)

            {

                for(alpha= (alpha3 + 1); alpha <= '9'; alpha++)

                {

                    putchar(alpha4);

                    putchar(alpha3);

                    putchar(' ');

                    putchar(alpha2);

                    putchar(alpha);

                    if(alpha4 == '9' && alpha3 == '8')

                    {

                        break;

                    }

                    putchar(',');

                    putchar(' ');

                }

            }

        }

    }

    putchar('\n');
    return(0);
}
