#include <stdio.h>

int main(){

  int dig[10] = {0,1,2,3,4,5,6,7,8,9}, temp=0; // initialising a digits array and a temp variable

  for(int i = 0; i < 10; i++){
    int n = 12124;            // initialising n
    int ctr = 0;              // and control variable

    while(n != 0){            // checking for frequency
      temp = n%10;
      if(dig[i] == temp){
        ctr += 1;
      }
      n = n / 10;
    }
    printf("frequency of %d : %d\n",i,ctr);
  }

  return 0;
}
