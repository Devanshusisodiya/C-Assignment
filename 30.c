#include <stdio.h>

int main(){

  int n = 371, temp = 0, sum = 0, temp_ch = n; // initialising n, temp, sum and a temp check variable
  while(n != 0){                              // running the loop to get the sum of cubes of digits
    temp = n % 10;
    sum += temp * temp * temp;
    n = n / 10;
  }

  if(sum == temp_ch){                        // checking if the sum of cubes is equal to the original number
    printf("number is an armstrong number\n");
  }else{
    printf("not an armstrong number\n");
  }

  return 0;
}
