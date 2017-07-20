#include <stdio.h>

int main(){
    printd(12345);
    printf("\n");
    return 0;
}

printd(int n){
    if(n < 0){
        putchar('-');
        n = -n;
    }
    if(n / 10){
        printd(n / 10);
    }
    putchar(n % 10 + '0');
}
