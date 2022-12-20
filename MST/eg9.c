#include<stdio.h>
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Ram", 36);
  myFunction("Sham", 35);
  myFunction("Raju", 30);
  return 0;
}