#include<stdio.h>
#include<string.h>
void main()
{
	char p[30];
	char q[30];
	int n=0, m=0,i,j, flag=0;
	printf("\nEnter the First String: \n");
	scanf("%s", p);

	printf("\nEnter the Second String: \n");
	scanf("%s", q);
	n=strlen(p);
	m=strlen(q);


	for (i = 0; i <= n-m; i++)
	{
		j=0;
		while(j<m && q[j]==p[i+j])
		{
			
			j=j+1;
			
		}
	if(j==m)
	{
		flag=1;
		break;
	}
		
	}
	if(flag==1)
	printf("\nString Matched ");
	else
		printf("\nString not Matched");

	
}