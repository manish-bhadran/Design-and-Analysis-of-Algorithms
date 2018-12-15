#include <stdio.h>
#define N 3

void floyd(int a[][N]){

	int i,j,k;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				if((a[i][j]+a[j][k])<a[i][k]){
					a[i][k]=a[i][j]+a[j][k];}
			
			}
		}
	}

}
void main(){

	int a[N][N],i,j;

	printf("enter elements into the matrix:\n" );

	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}

		floyd(a);

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		



}
