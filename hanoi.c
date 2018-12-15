#include<stdio.h>
void disk(int,char,char,char);

void disk(int n,char s,char d,char t)
{
	if(n>0)
	{
		disk(n-1,s,d,t);
	}
}
void main()
{
	int n;
	printf("Enter the number of disk: ");
	scanf("%d",&n);
	disk(n,s,d,t)
}