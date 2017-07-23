#include <stdio.h>

void strcpy(char *s, char *t);

int main(){
    char s[] = "dhlagkea;jgkld;s";
    char t[100];
    strcpy(t, s);
    printf("%s\n", t);
    return 0;
}

void strcpy(char *s, char *t){
    while((*s++ = *t++) != '\0'){
        
    }
}
