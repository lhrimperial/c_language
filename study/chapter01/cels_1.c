#include <stdio.h>

int main(){
    int fahr = 300;
    printf("----------逆序转化华氏度----------\n");
    for(;fahr > 0; fahr = fahr - 20){
        printf("%3d   %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
    }

    return 0;
}
