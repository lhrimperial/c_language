#include <stdio.h>

void print_int(int num);

int main(){
    print_int(10);
    return 0;
}

void print_int(int num){
    int len = sizeof(int) * 8;
    char bin_arr[len];
    int i;
    for(i = 0; i < len; i++){
        bin_arr[i] = '0';
    }
    i = 0;
    while(num > 0){
         bin_arr[i++] = num % 2 + '0';
         num /= 2;
    }
    while(--len >= 0){
        printf("%c",bin_arr[len]);
    }
    printf("\n");
}
