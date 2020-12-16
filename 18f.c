#include <stdio.h>

int fact(int n);

int main(){

  int n;
  scanf("%d", &n); printf("\n");
  int num = fact(n);
  printf("%d\n", num);

  return 0;
}

int fact(int n){
  if(n == 0){
    return 1;
  }else{
    return n*fact(n-1);
  }
}
