#include <stdio.h>

int main(){

  int n = 531, sum = 1, temp = 0; // initialising n and sum variable and a temporary var

  while(n != 0){ // getting each digit of the number
    temp = n%10;
    sum = sum * temp; // multiplying each element
    n = n / 10;
  }

  printf("%d\n", sum);
  return 0;
}
