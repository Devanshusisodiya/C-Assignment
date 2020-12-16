#include<stdio.h>

int reverse(int , int );

int main(){
    int number, res;
    scanf("%d", &number); printf("\n");
    res = reverse(number, 0);

    if(res == number){
      printf("%d is a palindrome\n", number);
    }else{
      printf("%d is not a palindrome\n", number);
    }

    return 0;
}

int reverse(int num, int rev){
    if(num==0){
        return rev;
    }else{
        return reverse(num/10, rev*10 + num%10);
    }
}
