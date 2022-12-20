#include<stdio.h>
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Ram");
  myFunction("Sham");
  myFunction("Raj");
  return 0;
}