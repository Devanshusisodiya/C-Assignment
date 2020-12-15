#include <stdio.h>

int main(){

  int n = 5, temp = 1;        // initialising n and a temp var
  for(int i = 2; i <= n; i++){ // simply multiplying continuously for the factorial
    temp = temp * i;
  }
  printf("%d is the factorial of %d", temp, n);
  return 0;
}
