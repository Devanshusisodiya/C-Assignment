#include <stdio.h>

int main(){

  // THIS PART OF THE CODE EXTRACTS THE LENGTH OF THE STRING(the number)

  char k[] = "100";      // initialising stringvar, flag value(which remains binary) and control variable
  int flag = 1, ctr = 0;
  while(flag == 1){
    if(k[ctr] != '\0'){ // comparing if the character is a null character or not
      ctr += 1;         // incrementing the control variable
    }
    else{
      flag = 0;
    }
  }
  // printing the first and last element
  printf("first digit is %c and last digit is %c\n", k[0], k[ctr-1]);

  return 0;
}
