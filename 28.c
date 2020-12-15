#include <stdio.h>

int main(){

  int num = 100, sum = 0;                // checking for prime upto an upper bound
  for(int j = 1; j < num+1; j++){
    int n = j, flag = 0;        // initialising n and setting an initial flag value(0)
    for(int i = 2; i < n; i++){ // checking if n is divisible by nums between 2 and n-1 inclusive
      int temp = n;             // if yes then setting the flag value to 1 and breaking the loop
      if(temp%i == 0){
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      sum += n;
    }
  }
  printf("%d is the sum of prime nos in the range 1 to %d\n", sum, num);

  return 0;
}
