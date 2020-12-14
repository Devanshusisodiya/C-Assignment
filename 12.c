#include <stdio.h>

// getting the sum of first and last digit of a number
int main(){

  int n = 3274;
  int lst = k%10, fst = n;
  while(fst >= 10){
    fst = fst / 10;
  }
  printf("%d %d\n",fst, lst);

  return 0;
}
