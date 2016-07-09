#include <stdio.h>

int printSum(int a,int b){
    return a + b;
}

main(){
    int a = 10, b = 12;
    printf("%d",printSum(a,b));
}