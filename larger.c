#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	if(a>b&&a>c)
	{
		printf("%d is greate\nr",a);
	}
	else if(b>a&&b>c)
	{
		printf("%d is greater\n",b);
	}
	else if(c>a&&c>b)
	{
		printf("%d is greater\n",c);
	}
}