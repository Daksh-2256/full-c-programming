// 145=1!+4!+5!=145
#include<stdio.h>
int main(){
    int n,q,rem,fact=1,i,result=0;
    printf("Please enter a number:");
    scanf("%d",&n);

    q=n;
    while(q!=0){
        rem=q%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
    }
    if(result==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }   
}