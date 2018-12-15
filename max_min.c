#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i, max=0, min=0;
	clrscr();
	printf("\nEnter the elements in array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
		       max= a[i];
		}
	}
	min= a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
		       min= a[i];
		}
	}

	printf("\n Max number is %d",max);
	printf("\n Min number is %d",min);
	getch();
}
