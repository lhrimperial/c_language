#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(){
    int x = 15;
}

unsigned getbits(unsigned x, int p, int n){
    return (x >> (p + 1)) & ~(~0 << n);
}
