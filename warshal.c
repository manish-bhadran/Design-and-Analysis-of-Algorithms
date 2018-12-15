#include<stdio.h>
void main()
{
	
	int a[100][100],i,j,n,k;

	printf("\nEnter the Rows & Column of Matrix: ");
	scanf("%d", &n);

	printf("\nEnter the elements in Matrix: \n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}

	printf("\n**********R1**********\n");
		for (i = 0; i <n ; i++)
		{
			for (j = 0; j < n; j++)
			{
				for(k=0; k<n; k++)
				{
					if(a[i][j]==1 &&a[j][i]==1)
					{
						a[i][j]=1;
					}

				}
				
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d\t",a[i][j]);
				
			}
			printf("\n");
			
		}
}