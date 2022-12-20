// auto storage class
#include<stdio.h>
/*int main(){
auto int i, j;
printf("%d, %d", i, j);
}*/
int main( ){
    int i = 2 ;
    { 
        {
            {
                printf ( "\n%d ", i ) ;
            }
            printf ( "%d ", i ) ;
        }
        printf ( "%d", i ) ;
    }
}