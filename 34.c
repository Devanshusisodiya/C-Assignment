#include <stdio.h>

int main(){

  int n = 145, temp, sum = 0, n_ch = n, temp_fact = 1;
  while(n!=0){
    temp = n%10;
    {
      for(int i = 2; i <= temp; i++){
        temp_fact = temp_fact*i;
      }
      sum += temp_fact;
    }
    temp_fact = 1;
    n = n/10;
  }
  if(sum == n_ch){
    printf("%d is a strong number\n", n_ch);
  }else{
    printf("%d is not a strong number\n", n_ch);
  }

  return 0;
}
