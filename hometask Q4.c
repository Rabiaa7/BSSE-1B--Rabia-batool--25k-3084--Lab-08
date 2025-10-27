#include<stdio.h>
int main(){
    int cinema[3][3]={{1,0,1},{0,0,1},{1,1,0}};
    int available=0;
    int row=0,seat=0;
    printf("      Available seats: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(cinema[i][j]==0){
                available++;
                row=i+1;
                seat=j+1;
                printf("seat number %d of row %d is available.\n",seat,row);
            }
        }
    }
    printf("total number of available seats is: %d \n",available);

    return 0;
}