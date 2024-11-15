#include<stdio.h>
int a=10,b=20;
int fun(){
    int a=5;
    {
        int c;
        c=b/a;
        printf("%d",c);
    }
}
int main(){
    fun();
}