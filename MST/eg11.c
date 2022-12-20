#include<stdio.h>
void swap(int *,int *);
int main(){
    int a=10 ,b=25;
    printf("before function calling a =%d b= %d \n", a, b);
    swap(&a, &b);
    printf("after function calling a= %d b= %d \n", a, b);
    return 0;
}
void swap(int *x, int *y){
    printf("In Swap : Before Swaping Value of x is %d and y is %d \n", *x, *y);
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("Value of x is %d and y is %d \n", *x, *y);
}