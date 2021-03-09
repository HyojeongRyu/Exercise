#include <stdio.h>
#include "Hyojeong.h"

int main()
{
	double amount_water;
	printf("Amount of water: ");
	scanf("%lf", &amount_water);
	// printf("%ld in quarts and %lld in molecule", amount_water/950, (long long)amount_water/Molecule);
	printf("Amount (in quarts) : %lf\n\nHyojeong : %lf\n", amount_water, (double)amount_water * Hyojeong_weight / Hyojeong_height);

	return 0;
}