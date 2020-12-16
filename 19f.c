#include <stdio.h>

int fib(int n);

int main(){

  int temp;
  scanf("%d", &temp); printf("\n");
  int num = fib(temp);
  printf("%d\n", num);

  return 0;
}

int fib(int n){
  if(n <= 1){
    return n;
  }else{
    return fib(n-1) + fib(n-2);
  }
}
