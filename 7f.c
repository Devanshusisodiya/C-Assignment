#include <stdio.h>

int fact(int a);

int main(){

  int n, sum = 0, temp = 0;
  scanf("%d", &n);
  int copy = n;
  printf("\n");
  while(n !=0){
    temp = n%10;
    sum += fact(temp);
    n = n / 10;
  }
  if(copy == sum){
    printf("%d is a perfect number", copy);
  }else{
    printf("%d is not a perfect nunmber", copy);
  }

  return 0;
}

int fact(int a){
  int temp = 1;
  for(int i = 2; i < a+1; i++){
    temp = temp * i;
  }
  return temp;
}
