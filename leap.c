#include<stdio.h>
void main()
{
    int n;
    printf("Enter a year\n");
    scanf("%d",&n);
    if(n>1000)
    {
        if(n%4==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("Wrong input");
    }
}