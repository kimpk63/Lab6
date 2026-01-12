#include <stdio.h>

int main(){
	int row,colum;
	int i,j;
	
	scanf ("%d %d",&row,&colum);
	int A[row][colum];
	
	for (i=0; i < row;i++){
		for (j=0 ;j<colum;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for (i=0; i < row;i++){
	
		for (j=0 ;j<colum;j++){
			printf("%d ",A[i][j] + 1);
		}
		printf("\n");
	}
}
