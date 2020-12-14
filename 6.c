#include <stdio.h>

int main(){

  int n = 10, sum = 0; // initialised n as 10 and a sum variable

  for(int i = 1; i < n+1; i++){ //looping over the vals and adding to sum var
    sum += i;
  }

  printf("%d", sum);

  return  0;
}
