#include <stdio.h>

int summation(int n);

int main(){

  int temp;
  scanf("%d", &temp); printf("\n");
  int sum = summation(temp);
  printf("%d\n", sum);

  return 0;
}

//recursive function to get the sum of digits of a number
int summation(int n){
  static int sum = 0 ;
  if(n == 0){
    return sum;
  }else{
    sum += n%10;
    summation(n/10);
  }
}
