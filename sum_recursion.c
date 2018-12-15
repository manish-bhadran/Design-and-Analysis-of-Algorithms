#include<stdio.h>
int add(int);

int add(n)
{
	if(n!=0)
	{
		return n+add(n-1);
	}
	else
		return n;
}
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The Sum is %d\n",add(n));

}