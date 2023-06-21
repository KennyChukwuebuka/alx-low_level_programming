#include <stdio.h>
/**
 * main - Fibo given giving values
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int befa = 1;
	unsigned long int afta = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", befa);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", afta);
		afta += befa;
		befa = afta - befa;
	}
	bef1 = (befa / l);
	bef2 = (befa % l);
	aft1 = (afta / l);
	aft2 = (afta % l);

	for (i = 91; i < 99; i++)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");

	return (0);
}



