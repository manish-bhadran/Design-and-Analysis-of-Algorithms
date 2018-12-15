#include<stdio.h>
int fact(int);

int fact(int num)
{
	if(num<=1)
		return 1;
	else
		return num*fact(num-1);
}
void main()
{
	int num;
	printf("Enter the number which you to know factorial: \n");
	scanf("%d",&num);
	printf("%d\n",fact(num));
}