#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=2*i-1;i++){
            printf(" ");
        }
        for(int j=1;j>=number;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}