#include <stdio.h>

int main(){

  /*looping over values between 1-100
    and checking if val not divisible by 2 (if val is odd)
  */

  for(int i = 1; i < 100; i++){
    if(i % 2 == 1){
      printf("%d\n", i);
    }
  }

  return  0;
}
