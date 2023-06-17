#include <stdio.h>
/**
 * main - Print combination of digits
 * Return: 0
 */
int main(void)
{       
        int m, n, o;
        int putcharCount = 0;
        
        for (m = 48; m < 58; m++)
        {       
                for (n = m + 1; n < 58; n++)
                {       
                        for (o = n + 1; o < 58; o++)
                        {       
                                putchar(m);
                                putchar(n);
                                putchar(o);
                                putcharCount +=3;
                                if (putcharCount < 6)
				{
					putchar(',');
					putchar(' ');
					putcharCount += 2;
				}
				else
				{
					putchar('\n');
					return 0;
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
