#include <stdio.h>
 
void main()
{
	char c;
	int i;
	printf("Enter a character\n");
	scanf("%c",&c);
	i=c;
	if(i>=65&&i<=90||i>=97&&i<=122)
	{
	    printf("alphabet");
	}
	else
	{
	    printf("\n not a alphabet");
	}
	
}