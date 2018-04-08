#include<stdio.h>
void main()
{

    int x,y=0,temp=0;
    printf("\nEnter a number");
    scanf("%d",&x);
    temp=x;
    while(temp>0)
    {
    y=y*10+(temp%10);
    temp=temp/10;
    }
    if(x==y)
    {
        printf("\nNumber is Palindrom");
    }
    else{
        printf("\nNumber is not Palindrom");
    }
}
