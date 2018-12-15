#include<stdio.h>
int gcd(int m, int n){
	int t;
	if(m>n)
	{
		
		t=n;
	}
	else{
		
		t=m;
	}
	while(t>0){
		if(m%t ==0 && n%t==0)
		{
			return t;
		}
		else{
			t--;
		}
	}
}
void main()
{
	int a,b;
	int ans;
	printf("\nEnter the numbers: ");
	scanf("%d%d", &a,&b);
	ans= gcd(a,b);
	printf("\nGCD (Consecutive Method) answer is %d\n",ans);

}