#include <stdio.h>

void compare(int a, int b);

int main(){

  int a = 4, b = 5;
  compare(a, b);

  return 0;
}

void compare(int a, int b){
  if(a > b){
    printf("%d is greater than %d\n",a,b);
  }else{
    printf("%d is greater than %d\n",b,a);
  }
}
