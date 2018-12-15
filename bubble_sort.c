#include<stdio.h>


void main()
{
	int a[100], i,j;
	int temp, n;
	printf("\nEnter the size of array: ");
	scanf("%d", &n);
	printf("\nEnter the elements in array: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	

	for(j=0; j<=n-1;j++)
	{

		for (i = 0; i <= n-2; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		
		}
		
	}
	printf("\nSorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}