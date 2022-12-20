#include<stdio.h>
void main(){
    int i = 7,j = 5;
    printf("%d %d %d %d \n", i+j, i-j, i*j, i/j ); // 12 2 35 1 
    printf("%d \n", i%j ); // 2
    printf("%d %d \n", i++, ++j ); // 7 6
    printf(" value of i after post increment: %d", i);
}