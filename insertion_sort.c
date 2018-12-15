 
#include <stdio.h>
#include <time.h> 
int main()
{
  int n, a[100000], i, j, t;
  //float time1;
  //clock_t start,end;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 //start=clock();
  for (i = 0; i < n; i++)
  	scanf("%d", &a[i]);
  //  a[i]=rand();
 
  for (i = 1 ; i <= n - 1; i++) {
    j = i;
 
    while ( j > 0 && a[j-1] > a[j]) {
      t          = a[j];
      a[j]   = a[j-1];
      a[j-1] = t;
 
      j--;
    }
  }
 //end=clock();
 //time1=((float)(end-start))/CLOCKS_PER_SEC;
 // printf("time comp=%f\n",time1);
 for (i = 0; i < n; i++)
  	printf("%d ", a[i]);
  
 
  return 0;
}