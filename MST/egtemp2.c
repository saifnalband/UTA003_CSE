#include<stdio.h>
int main(){
    int i = 0, j = 0;
    printf(" in while loop \n");
    while (i<5)
    {
        /* code */
        printf("%d Hello While \n", i);
        i = i + 1;
    }
    printf(" value of i after while loop:%d \n",i);
    printf("-------------------------------- \n");
    do
    {
        /* code */
        printf("%d Hello While \n", j);
        j = j + 1;
    } while (j<5);
    printf(" value of j after do while loop:%d ",j);
}