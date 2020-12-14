#include <stdio.h>

int main(){

  int n = 256, rev = 0;

  while(n != 0){ // reversing a number
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }

printf("%d\n", rev/10);
  return 0;
}
