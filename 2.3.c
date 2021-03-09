#include<stdio.h>
int main(void)
{
	int age;

	printf("What is your ages?");
	scanf("%d", &age);
	printf("You've lived %d years or %d day", age, age*365);

	return 0;
}