#include <stdio.h>

int main(){

  int n = 124, temp = 0, rev = 0; // initialising n and temp var and reverse var

  while(n != 0){      // reversing the number
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }
  rev = rev / 10;

  while(rev != 0){        // a lot of checking
    temp = rev % 10;
    if(temp==0){
      printf("zero ");
    }
    if(temp==1){
      printf("one ");
    }
    if(temp==2){
      printf("two ");
    }
    if(temp==3){
      printf("three ");
    }
    if(temp==4){
      printf("four ");
    }
    if(temp==5){
      printf("five ");
    }
    if(temp==6){
      printf("six ");
    }
    if(temp==7){
      printf("seven ");
    }
    if(temp==8){
      printf("eight ");
    }
    if(temp==9){
      printf("nine ");
    }
    rev = rev / 10;
  }

  return 0;
}
