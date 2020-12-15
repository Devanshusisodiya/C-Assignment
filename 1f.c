#include <stdio.h>

int cube(int i); // protoype for the cube method

int main(){

  int a = 5;
  int b = cube(a); // calling the cube method
  printf("%d\n", b);

  return 0;
}

// actual defnition of the cube method
int cube(int i){
  int temp = 0;
  temp = i*i*i;
  return temp;
}
