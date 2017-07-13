#include <stdio.h>

int main(){
    int c, nl = 0;
    while((c = getchar()) != ' '){
       if(c == '\n'){
           nl++;
       } 
    }
    printf("input %d line\n",nl);
    return 0;
}
