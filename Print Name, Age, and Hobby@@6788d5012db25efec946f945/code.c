#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
scanf("%99s %d %99s" , name , &age , hobby);
printf("Name: %s\n" , name);
printf("Age: %d\n", age);
printf("Hobby: %s" , hobby);
return 0;
}