#include <stdio.h>

/* extern is being used to declare count in the 
second file eg16_2.c, 
where as it has its definition in the first file, eg16_2.c. */

int count ;
extern void write_extern();
 
int main() {
   count = 5;
   write_extern();
}