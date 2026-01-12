#include <stdio.h>

int main(){
	int row,colum;
	int i,j;
	int min;
	
	scanf ("%d %d",&row,&colum);
	int A[row][colum];
	
	for (i=0; i < row;i++){
		for (j=0 ;j<colum;j++){
			scanf("%d",&A[i][j]);
		}
	}
	min = A[0][0];
	
	for (i=0; i < row;i++){
		for (j=0 ;j<colum;j++){
			if (A[i][j] < min){
				min = A[i][j];
			}
		}
	}
	printf("Min = %d\n",min);
}
