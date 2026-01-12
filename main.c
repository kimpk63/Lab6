#include <stdio.h>

int main(){
	int T[5][6],i ,j;
	for ( i=0 ;i < 5 ;i++){
		for (j=0; j<6 ;j++){
			if (i % 2 == 0){
				T[i][j] = 5;
			}
			else {
				T[i][j] = 0;
			}
		}
	}
	for (i = 0 ; i < 5 ;i++){
		for (j = 0;j < 6;j++){
			printf("%d",T[i][j]);
			
		}
		printf("\n");
	}
	
	
}
