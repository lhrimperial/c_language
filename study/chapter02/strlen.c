#include <stdio.h>

int strlen(char s[]);

int main(){
    char s[] = "hello world.";
    printf("s[] length : %d\n", strlen(s));
    return 0;
}

int strlen(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}
