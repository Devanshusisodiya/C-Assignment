#include <stdio.h>

int summation(int n);

int main(){

  int num;
  scanf("%d", &num); printf("\n");
  int s = summation(num);
  printf("%d\n", s);

  return 0;
}

int summation(int n){
  if(n!=0){
    return n + summation(n-1);
  }else{
    return n;
  }
}
