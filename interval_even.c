#include<stdio.h>
int main()
{
    int x,y,i;
    printf("\n Enter 2 numbers :");
    scanf("%d%d",&x,&y);
    printf("\nOdd numbers are\n");
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {

            printf("%d\t\n",i);
        }
    }
    return 0;
}
