#include<stdio.h>
int main(void)
{
	float n;
	
	printf("Enter a floating-point value: ");
	scanf("%f", &n);
	printf("fixed-point notation: %f\n",n);
	printf("Exponential notation: %e\n",n);
	printf("p notation: %a\n",n);

}