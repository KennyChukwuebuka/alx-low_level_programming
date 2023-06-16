#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * more - This is random number program
 * Return: 0
 */
int main(void)
{
        int n;
        time_t t;
        
	time(&t);
				
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        n = t % 201 - 100;

        	if(n > 0){
	       		printf("%d is positive\n", n);
        	}else if(n < 0){
	       		printf("%d is negative\n", n);
       		}else{
			printf("%d is zero\n", n);
        	}
        	return (0);
}
