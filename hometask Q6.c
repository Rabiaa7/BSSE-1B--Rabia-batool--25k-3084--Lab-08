#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf(" | ");

        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf(" | ");

        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int b=1;
        for(int j=1;j<=i;j++){
            int d=b+64;
            char ch=(char)d;
            printf("%c",ch);
            b++;
        }

        printf("\n");
    }

    return 0;
}