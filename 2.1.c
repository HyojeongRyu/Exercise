#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char first_n[50];
	char last_n[50];

	printf("Put your first name\n");
	scanf("%s", first_n);
	printf("Put your last name:\n");
	scanf("%s", last_n);
	printf("%s %s", first_n, last_n);
	printf("%s\n %s", first_n, last_n);
	printf("%s %s", first_n, last_n);

	system("pause");
	return 0;
}