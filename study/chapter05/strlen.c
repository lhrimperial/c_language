#include <stdio.h>

int strlen(char *s);

int main(){
    char s[] = "adkajgldkajeijoijdksa";
    int len = strlen(s);
    printf("string len is %d\n", len);
    return 0;
}

int strlen(char *s){
    char *p = s;
    while(*p != '\0'){
        p++;
    }
    return p - s;
}
