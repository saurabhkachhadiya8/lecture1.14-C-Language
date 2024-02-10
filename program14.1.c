#include<stdio.h>
main(){
	
	int rows,cols,i,j;
	float sum=0.0;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n");
	}

	printf("Average of an Array : %.2f",sum/(rows*cols));
	
}
