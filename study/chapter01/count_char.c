#include <stdio.h>

int main(){
    int m = 0;
    while(getchar() != ' '){
        m++;
    }
    printf("there are %d\n",m);
    return 0;
}
