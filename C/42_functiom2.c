#include<stdio.h>
char fun(){
    return 'a';
}
int main(){
    char c = fun();
    printf("Chatacter is:%c",c);
}