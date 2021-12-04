#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	char again='y';
	while(again=='y'){
	srand(time(NULL));
	int choice,toss=0;
	toss=rand()%2;
	printf("enter the choice head=1,tail=1");
	scanf("%d",&choice);
	if(choice==toss)
	{
		printf("WIN");
	}
	else
	{
		printf("LOSS");
	}
	printf("yes=y,no=n");
	scanf("%s",&again);
	}
	return 0;
}
