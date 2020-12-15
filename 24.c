#include <stdio.h>

int main(){

    int n1 = 6, n2 = 12, gcd = 0;

    for(int i=1; i <= n1 && i <= n2; i++){  // checking if i is factor of both integers
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
