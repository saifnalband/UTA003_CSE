#include<stdio.h>
int main(){
    int a = 10, b = 20, choice;
    char ans = 'y';
    printf("enter the option: ");
    scanf("%d", choice);
    switch (choice)
    {
    case 1: 
        /* code */
        printf(" the add of two numbers %d", a+b);
        break;
    case 2:
        printf(" the add of two numbers %d", a+b);
        break;
    default:
        print(" the value of a: %d and b: %d", a, b);
        break;
    }
    printf("Do you want to continue");
    scanf("%c",&ans);
    while(ans == 'y' || ans=='Y'){
        goto switch(choice);
    }
    if(ans == 'n' || ans == 'N'){
        printf("thanks for your service");
    }
}