#include <stdio.h>

void armstrong(int a);
void prime(int a);

int main(){

  int num;
  scanf("%d", &num);
  printf("\n");
  armstrong(num);
  prime(num);

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
    printf("number is an armstrong number\n");
  }else{
    printf("not an armstrong number\n");
  }
}

void prime(int a){
  int n = a, flag = 0;       // initialising n and setting an initial flag value(0)
  for(int i = 2; i < n; i++){ // checking if n is divisible by nums between 2 and n-1 inclusive
    int temp = n;             // if yes then setting the flag value to 1 and breaking the loop
    if(temp%i == 0){
      flag = 1;
      break;
    }
  }
  if(flag == 0){
    printf("%d is prime\n", n);
  }else{
    printf("%d is not a prime\n", n);
  }
}
