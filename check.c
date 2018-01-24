#include<stdio.h>
void main()
{
	int n;

	printf("Enter a number \n");

	scanf("%d",&n);

	if(n>=1&&n<=100000)
	{
		printf("Positive");
	}
	else if(n<1)
	{
		printf("Negetive");
	}
}