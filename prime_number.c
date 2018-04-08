#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("\nEnter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("\n%d is prime number",n);
    }
    else
    {
        printf("\n%d is not a prime number",n);
    }
return 0;
}
