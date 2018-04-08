#include<stdio.h>
int main()
{
    int n,i,result;
    printf("\nEnter a number");
    scanf("%d",&n);
    printf("\nFirst 5 multiples are :\n");
    for(i=1;i<=5;i++)
    {
      result=n*i;
      printf("%d\n",result);
    }
    return 0;
}
