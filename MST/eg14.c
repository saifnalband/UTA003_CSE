#include<stdio.h>
int main(){
    printf(" In Main Function \n");
    increment();
    increment();
    increment();
    printf(" end of Main function");
    return 0;
}
void increment(){
    auto int i = 10;
    printf(" In Increment function value of i : %d \n",i);
    i = i + 1;
}