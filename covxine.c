//program to check wheather you are elligible for vaccination 
#include<stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18 && age<=44){
        printf("you can take vaccine from 1 may onwards\n");
    }
    else{
        printf("you are not elligible for vaccination\n");
    }
    return 0;
}