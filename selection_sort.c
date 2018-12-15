#include<stdio.h>


void main()
{
	int a[100], i,j;
	int min=0, temp, n;
	printf("\nEnter the size of array: ");
	scanf("%d", &n);
	printf("\nEnter the elements in array: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0; i< (n-1);i++)
	{
		min=i;
		for (j = i+1; j < n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		
		}
		
	}
	printf("\nSorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}