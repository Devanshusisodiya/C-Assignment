#include <stdio.h>

int main(){

  int lb = 100, ub = 500;                      // lower bound and upper bound of the loop

  for(int i = lb; i < ub+1; i++){
    int n = i, temp = 0, sum = 0, temp_ch = n; // initialising n, temp, sum and a temp check variable
    while(n != 0){                              // running the loop to get the sum of cubes of digits
      temp = n % 10;
      sum += temp * temp * temp;
      n = n / 10;
    }
    if(sum == temp_ch){                        // checking if the sum of cubes is equal to the original number
      printf("%d is an armstrong number\n", temp_ch);
    }else{
      printf("%d is not an armstrong number\n", temp_ch);
    }
  }

  return 0;
}
