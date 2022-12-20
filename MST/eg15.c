#include<stdio.h>
int main(){
    printf(" In Main Function \n");
    increment_value();
    increment_value();
    increment_value();
    printf(" end of Main function");
    return 0;
}
void increment_value(){
    static int i = 10;
    printf(" In Increment function value of i : %d \n",i);
    i = i + 1;
}