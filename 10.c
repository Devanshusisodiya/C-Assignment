#include <stdio.h>

int main(){

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
  printf("%d\n", ctr);
  return 0;
}
