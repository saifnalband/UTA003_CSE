/* A function with no parameters and with return 
value */
#include<stdio.h>
int sum();
int main(){
    int c = sum();
    printf("sum is %d", c); 
}
int sum(){
    int x=10,y=30;
    return(x+y); //return value
}