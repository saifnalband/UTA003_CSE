// A function with no parameter and no return value
#include<stdio.h>
void print(); //func declaration
int main(){
    printf ("1. no parameter and no return value : in Main Function \n");
    print(); //func calling
    printf("3. back in the main function");
}
void print() { //func definition
    printf("2. in PRINT function \n");
    for(int i=1;i<=30;i++){
        printf("*");
    }
    printf("\n");
}