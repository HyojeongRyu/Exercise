#include<stdio.h>
void jolly();
void deny();


int main()
{
	int i;

	for (i = 1; i < 4; i++)
	{
		printf("For he's a ");
		jolly();
		printf("fellow!\n");
	}
	deny();

	return 0;
}

void jolly()
{
	printf("Jolly good ");
}

void deny()
{
	printf("Which nobody can deny!");
}

