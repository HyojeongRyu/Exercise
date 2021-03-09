#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	float value;

	printf("Put the value in inches:");
	scanf("%f", &value);
	printf("It's %f in centimeters", value / 2.54);

	system("pause");
	return 0;

}