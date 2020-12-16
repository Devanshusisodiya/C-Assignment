#include <stdio.h>

int main(){

  int ub;
  scanf("%d", &ub); printf("\n");

  for(int i = 1; i <= ub; i++){
    int n = i, temp, sum = 0, n_ch = n, temp_fact = 1;
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
    }
  }

  return 0;
}
