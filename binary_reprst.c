#include<stdio.h>
int bin(unsigned n) 
{ 
	int count=0;
    
    if (n > 1)
    {
    	
    	bin(n/2);

    } 
         
  	
    printf("%d", n % 2);
    
    return count; 
    
} 
  
void main(void) 
{ 
	int count=0;
	int n;
	printf("\nEnter the number: ");
	scanf("%d",&n);

  count=  bin(n);
    printf("\nNumber of binary digits: %d", count);
} 