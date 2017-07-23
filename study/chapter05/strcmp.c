#include <stdio.h>

int strcmp(char *s, char *t);

int main(){
    char s[] = "abcdtfjalkgjajl";
    char t[] = "abcdtdlkajgel;ja;kl";
    int result = strcmp(s, t);
    printf("result is %d\n", result);
    return 0;
}

int strcmp(char *s, char *t){
    for(; *s == *t; s++, t++){
        if(*s == '\0'){
            return 0;
        }
    }
    return *s - *t;
}
    
