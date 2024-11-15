//write a program in array repeted numbers 
#include<stdio.h>
int main(){
    int seen[10] = {0};
    int N;
    printf("Enter the number:");
    scanf("%d",&N);

    int rem;
    while(N>0){
        rem = N%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
            N=N/10;
    }
    printf("%d",N);
    if(N>10)
        printf("YES");
    else
        printf("No");
}
// programiz