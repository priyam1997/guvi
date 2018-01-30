#include <stdio.h>
 
void main()
{
	int n,temp=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>=1)
	{
		temp=temp+n;
		n--;
	}
	printf("Sum is %d",temp);
}