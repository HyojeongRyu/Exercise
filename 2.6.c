#include<stdio.h>
int toes();
int n;

int main(void)
{
	printf("Put the number:");
	scanf("%d", &n);
	toes();
}

int toes()
{
	printf("The number is %d\n", n);
	printf("The twice is %d\n", 2 * n);
	printf("The square is %d\n", n * n);
}