#include <stdio.h>

int main(){

  int n = 5, pow = 1, exp = 3; // initialising n and power of n and exponent var

  for(int i = 0 ; i < exp; i++){   // running the for to calculate the power
    pow = pow*n;
  }
  printf("%d\n", pow);

  return 0;
}
