#include <stdio.h>

int mypow(int base, int n);

int main(){
    int n;
    for(n = 0; n < 10; n++){
        printf("2 %d幂:%d\n", n, mypow(2, n)); 
    }
    return 0;
}

int mypow(int base, int n){
    int i, result = 1;
    for(i = 0; i < n; i++){
        result = result * base;
    }
    return result;
}
