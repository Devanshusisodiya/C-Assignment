#include <stdio.h>

int main(){

  int n = 10; // initialising n as 10

  printf("Multiplication Table of %d\n\n", n);

  for(int i = 1; i < n+1; i++){ // looping over vals 1-10 and multiplying with n(10)
    printf("%d\n", i*n);        // and printing simultaneously
  }

  return  0;
}
