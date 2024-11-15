//with macros
#include<stdio.h>
#define N 10
int main(){
    int a[N],i;
    for(i=0;i<N;i++){
        printf("Enter the input for index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0;i<N;i++){
        printf("%d",a[i]);
    }
}