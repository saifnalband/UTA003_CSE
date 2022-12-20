#include<stdio.h>
void sum(int, int); // function declaration/prototype
int main(){
    int a, b, c;
    printf("enter the two no: \n");
    scanf("%d %d", &a, &b);
    printf(" c : %d\n", a + b);
    printf("a : %d  b : %d", a,b);
    printf(" c : %d\n", c = a + b);
    sum(a,b); // function calling
    printf(" sum %d ", c);
    printf(" end of main function");
}
void sum( int x, int y){ // function definition
    int c;
    c = x + y;
    printf ("In sum function: sum is %d \n", c);
}