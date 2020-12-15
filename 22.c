#include <stdio.h>

int main(){

  int n = 50; // initialising n

  for(int i = 1; i <= 50; i++){ // checking if n is divisible by by numbers, if yes then 
    int temp = n;               // printing those numbers
    if(temp%i == 0){
      printf("%d is a factor of %d\n",i,n);
    }
  }

  return 0 ;
}
