#include <stdio.h>

void armstrong(int a);

int main(){

  int ub;
  scanf("%d", &ub);
  printf("\n");

  for(int i = 1; i < ub+1; i++){
    armstrong(i);
  }

  return 0;
}

void armstrong(int a){
  int n = a, temp = 0, sum = 0, temp_ch = n; // initialising n, temp, sum and a temp check variable
  while(n != 0){                              // running the loop to get the sum of cubes of digits
    temp = n % 10;
    sum += temp * temp * temp;
    n = n / 10;
  }

  if(sum == temp_ch){                        // checking if the sum of cubes is equal to the original number
    printf("%d number is an armstrong number\n", sum);
  }
}
