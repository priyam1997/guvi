#include<stdio.h>
void main()
{
    int n,i,num,count=0;
    printf("Enter the length of digit\n");
    scanf("%d",&n);
    printf("Enter the digit\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num>=10)
        {
            num=num%10;
            count++;
        }
        else if (num<10)
        {
            count++;
        }
        
    }
    printf("Number of digits are %d",num);
}