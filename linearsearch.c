#include<stdio.h>
void main()
{
	int ele, i, a[5];
	int flag=0;
	printf("\nEnter the elements in array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the you want to search: ");
	scanf("%d", &ele);
	for(i=0;i<5;i++)
	{
		if(a[i]==ele)
		{
			flag=0;
			printf("\n%d Element found at %d position\n ", ele,i);
			break;
		}
		else
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("\nElement not found\n");
	}
}
