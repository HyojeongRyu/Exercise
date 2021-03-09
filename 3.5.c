#include <stdio.h>
#include <math.h>
int main()
{
	long n;
	printf("What is your ages?");
	scanf("%ld", &n);
	printf("You've lived %ld seconds", n * 3.156 * pow(10,7));

	return 0;
}