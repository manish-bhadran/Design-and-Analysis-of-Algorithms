#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i,j;
	int flag;
	clrscr();
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
			flag=1;
			break;
			}

		}

	}
	if(flag==1)

		printf("\nNot Unique\n");

	else
		printf("\nUnique\n");
	getch();
}
