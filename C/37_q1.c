//write a program for add two numbers without using plus operator
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the two numbers:");
    scanf("%d %d",&x,&y);
    while(y!=0){
        x++;
        y--;

    }
    printf("Sum of two values is %d",x);
}