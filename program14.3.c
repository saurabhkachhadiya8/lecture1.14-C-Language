#include<stdio.h>
main(){
	
	int rows,cols,i,j,sum=0;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&rows);
	cols=rows;
	
	int arr[rows][cols];
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
			if(i==j){
				sum+=arr[i][j];
			}
		}
		printf("\n");
	}

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("The sum of diagonal elements of an Array : %d",sum);
	
}
