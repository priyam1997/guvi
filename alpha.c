#include<stdio.h>
void main()
{
	char n;

	printf("Enter a character \n");

	scanf("%c",&n);

	if(n=="a"||"e"||"i"||"o"||"u")
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}