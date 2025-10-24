#include<stdio.h>
int main(){
	int matrix[3][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int i,j;
 int max=matrix[0][0];
 int row=0,col=0;
 printf("the matrix is : \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max<matrix[i][j]){
				max=matrix[i][j];
				row=i+1;
				col=j+1;
			}
		}
	}
	printf("the maximum value is: %d \n",max);
	printf("the index is %dx%d ",row,col);
	
	
	return 0;
}
