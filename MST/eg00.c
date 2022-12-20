#include<stdio.h>
int main(){
    int pin = 3704, n, i, cw, cd;
    printf("Enter the PIN: ");
    scanf("%d",&n);

    if(n=pin){
        printf("1. Balance Check \n");
        printf("2. Withdraw Check \n");
        printf("3. Withdraw Check \n");
        scanf("&d",i);
        while(i<=3){
            switch(i){
                case 1: printf("Your balance is"); break;
                case 2: printf("Your balance is again"); break;
                case 3: printf("Your balance is again again"); break;
                default : printf("Your balance is ZERO"); break;
            }
        }
    }
    else{
        printf("Saif is Your balance is");
    }
}