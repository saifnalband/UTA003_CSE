#include<stdio.h>
int main(){
    int wdlen;
    while(wdlen<2){
        printf("Word length... ");
        scanf("%d", &wdlen);
    }

    do {
        printf("Word length... ");
        scanf("%d", &wdlen);
    } while(wdlen<2); 
}