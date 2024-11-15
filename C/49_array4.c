//write the following program in reverse oreder
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
}