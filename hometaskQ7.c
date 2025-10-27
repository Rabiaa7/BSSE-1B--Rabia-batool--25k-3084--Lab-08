#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int a=1;
    int p=1;
    int q=1;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("*");
        }
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        printf(" | ");

        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=p;j++){
            printf("%d",j);
        }
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        printf(" | ");

        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int b=1;
        for(int j=1;j<=q;j++){
            int d=b+64;
            char ch=(char)d;
            printf("%c",ch);
            b++;
        }
        printf("\n");
        a+=2;
        p+=2;
        q+=2;
    }

    return 0;
}