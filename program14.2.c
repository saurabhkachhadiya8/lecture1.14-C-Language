#include<stdio.h>
main(){
	
	int rows,cols,i,j;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arra[rows][cols];
	printf("\nEnter array A's elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arra[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d  ",arra[i][j]);
		}
		printf("\n");
	}
	
	int arrb[rows][cols];
	printf("\nEnter array B's elements\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arrb[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d  ",arrb[i][j]);
		}
		printf("\n");
	}
	
	int sum[rows][cols];
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			sum[i][j]=arra[i][j]+arrb[i][j];
		}
	}
	printf("\nArray C is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	
}
