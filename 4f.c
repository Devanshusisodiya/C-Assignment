#include <stdio.h>

void oddeven(int a);

int main(){

  int num = 34;
  oddeven(num);

  return 0;
}

void oddeven(int a){
  if(a%2 == 0){
    printf("%d is even\n", a);
  }else{
    printf("%d is odd\n", a);
  }
}
