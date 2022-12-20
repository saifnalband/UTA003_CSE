#include<stdio.h>
int Fibonacci(int n){
    if (n <= 1) 
    return n; 
    return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
int main(){
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    printf("%d", Fibonacci(n - 1));
}