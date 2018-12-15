#include<stdio.h>
int gcd(int m, int n){
	if(n==0)
	{
		return m;
	}
	else if(m>n)
	{
		return gcd(n, m%n);
	}

}
int main()
{
	int a,b;
	int ans;
	printf("\nEnter the numbers: ");
	scanf("%d%d", &a,&b);
	ans= gcd(a,b);
	printf("\nGCD (Euclid Method) answer is %d\n",ans);

	
}