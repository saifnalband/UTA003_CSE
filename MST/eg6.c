//A function with parameter and with return value
#include<stdio.h>
int max(int, int);
int main(){
    int a = 10,b = 20, c;
    c = max(a,b);
    printf ("greatest no is %d", c);
}
int max(int a, int b){
    if(a>b)
        return(a);
    else
        return(b);
}
