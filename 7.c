#include <stdio.h>

int main(){

  /*looping over values between 1-100
    and checking if val divisible by 2 (if val is even)
    if it is, then adding to sum var
  */
  int sum = 0;

  for(int i = 1; i < 100; i++){
    if(i % 2 == 0){
      sum += i;
    }
  }

  printf("%d", sum);

  return  0;
}
