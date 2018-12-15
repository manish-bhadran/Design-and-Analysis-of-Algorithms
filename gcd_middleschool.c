#include<stdio.h>
int gcd1(int m){
	int a1[100];
	int j, i=2;
	while(m!=1)
	{
		if(m%i==0){
		for(j=0;j<100;j++){
			a1[j]=i;
		}
		m=m/i;
	}

		else
			i++;

	}

int gcd2(int n){
	int a2[100];
	int j, i=2;
	while(m!=1)
	{
		if(m%i==0){
		for(j=0;j<100;j++){
			a2[j]=i;
		}
		m=m/i;
	}

		else
			i++;

	}
int add(int a1[], int a2[])
{
	for(i=0;i<10;i++)
	{
		if(a1[i]==a2[i])
	}
}
	
}
void main()
{
	int a,b;
	printf("\nEnter the numbers: ");
	scanf("%d%d", &a,&b);
	gcd1();
	gcd2();
	printf("\nGCD (Middle Schoole Method Method) answer is %d\n",gcd(a,b));

}
