#include <stdio.h>

char *strcat(char *s, char *t);

int main(){
    char s[100] = "dageakje";
    char t[] = "djagoiejoi";
    printf("s : %s\n", s);
    printf("t : %s\n", t);
    printf("strcat is : %s\n", strcat(s, t));
    return 0;
}

char *strcat(char *s, char *t){
    char *p = s;
    while(*s++){
        
    }
    s--;
    while((*s++ = *t++) != '\0'){
        
    }
    return p;
}
