#include<stdio.h>
int main()
{
	int a[100];
	int i,ele,n;
	int high=0, low=0;
	
	int mid=0;

	printf("\nEnter the size of array: ");
	scanf("%d", &n);
	high=n-1;

	printf("\nEnter the elements in array(in sorted order): \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements you want to search: ");
	scanf("%d", &ele);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==ele)
		{
			printf("\n %d Element found at %d position", ele,mid+1);
			break;
		}
		if(a[mid]>ele)
		{
			high=mid-1;
			
		}
		if(a[mid]<ele)
		{
			low=mid+1;
		}

	}
	if(low>high)
	{
		printf("\n %d Element not found", ele);
	}

return 0;
	
}