#include <stdio.h>

int main(){

  int n = 636, rev = 0, temp_check = n; // initialising n, a temp var and a reverse var

  while(n != 0){ // reversing a number
    rev += n%10;
    rev = rev*10;
    n = n/10;
  }
  rev = rev / 10;

  // checking if the number is a palindrome

  if(rev == temp_check){
    printf("number is a palindrome\n");
  }else{
    printf("number is not a palindrome\n");
  }
  return 0;
}
