#include <stdio.h>

int main() {
    char str[5][5]={{'x','o','x','o','x'},{'o','x','o','x','o'},{'x','o','x','o','x'},{'o','x','o','x','o'},{'x','o','x','o','x'}};
    int count=0,empty=0,total=0;

    printf("        Classroom Seating Chart:    \n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("x = student , o = empty \n");

    for(int i=0;i<5;i++){
        printf("Row %d: ",i);
        for(int j=0;j<5;j++){
            if(str[i][j]=='x'){
                count++;
            }else{
                empty++;
            }
            printf("%4c",str[i][j]);
        }
        printf("\n");
    }
    total=count+empty;
    printf("Summary: \n");
    printf("Students seated: %d \n",count);
    printf("Empty seats: %d \n",empty);
    printf("Total desks: %d \n",total);

    return 0;
}