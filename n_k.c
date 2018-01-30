#include <stdio.h>
 
void main()
{
	int n,temp=1,i,a[10],k,temp1=0;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
	    a[i]=temp;
	    temp++;
	}
	while(k>=1)
	{
	    temp1=temp1+k;
	    k--;
	}
	printf("sum is %d",temp1);
}