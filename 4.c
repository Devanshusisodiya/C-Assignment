#include <stdio.h>

int main(){

  /*looping over values between 1-100
    and checking if val divisible by 2 (if val is even)
  */

  for(int i = 1; i < 100; i++){
    if(i % 2 == 0){
      printf("%d\n", i);
    }
  }

  return  0;
}
