#include<stdio.h>

int  binary_search(int a[], int ele, int low, int high)
{
	int mid = (low+high)/2;
	if(low>high)
		return -1;
	if(a[mid]==ele)
		return mid;
	if(a[mid]<ele)
		return binary_search(a, ele, mid+1, high);
	else
		return binary_search(a, ele, low, mid-1);
}

int main()
{
	int a[100];
	int i,ele,n,pos;
	int high=0, low=0;
	

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
	pos=binary_search(a, ele, low, high);

	if (pos < 0 )
    printf("%d element not found in the array.\n", ele);
 
  else
    printf("%d element found at %d position.\n", ele, pos+1); 
    
  return 0;
	
	
}