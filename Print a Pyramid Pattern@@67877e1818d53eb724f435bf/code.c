#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-i;space++){
            printf(" ");
        }
        for(int j=1;j<=2*j-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}