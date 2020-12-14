#include <stdio.h>

int main(){

  int n = 531, sum = 0; // initialising n and sum variable

  while(n != 0){ // getting each digit of the number
    sum += n%10; // adding each element 
    n = n / 10;
  }

  printf("%d\n", sum);
  return 0;
}
