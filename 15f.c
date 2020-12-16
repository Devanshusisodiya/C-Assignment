#include<stdio.h>

int reverse(int , int );

int main(){
    int number, res;
    scanf("%d", &number); printf("\n");
    res = reverse(number, 0);

    printf("%d is the reverse\n", res);

    return 0;
}

int reverse(int num, int rev){
    if(num==0){
        return rev;
    }else{
        return reverse(num/10, rev*10 + num%10);
    }
}
