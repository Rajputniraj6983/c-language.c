#include<stdio.h>

void main(){

	short n, m, sum;
	
	
	
	printf("Enter size of row : ");
	scanf("%hi", &n);

	printf("Enter size of column : ");
	scanf("%hi", &m);
	
	
	short a[n][m];
	
	for (short i = 0; i < n; i++){
		
		sum = 0;
		for (short j = 0; j < m; j++){
		
			printf("\nEnter value of a[%hi][%hi] : ", i, j);
			scanf("%hi", &a[i][j]);
		
		}
		
	
	}
	
	
	printf("\n\nCreated array:\n");
	
	for (short i = 0; i < n; i++){
		
		for (short j = 0; j < m; j++)	
			printf("%hi ", a[i][j]);
	
		printf("\n");
		
	}
	
	
	printf("\n\nColumn-wise sum of array:\n");
	for (short j = 0; j < m; j++){
		
		sum = 0;
		for (short i = 0; i < n; i++){
		
			sum += a[i][j];
			
		}
		printf("Column %hi sum : %hi \n", j+1, sum);
		printf("\n");

	}	
		
	
}
