// A function with parameters and no return value
#include<stdio.h>
void mul(int, int);
int main(){
    int a = 10,b = 20;
    mul(a,b); //actual arguments
}
void mul(int x, int y) { //formal arguments
    int s;
    s = x * y;
    printf ("mul is %d", s); 
}