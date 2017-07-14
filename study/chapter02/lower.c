#include <stdio.h>
#include <string.h>

char lower(char c);


int main(){
    char s[] = "dalAJKJIJHKjdll";
    int i,len;
    printf("string befor:%s\n", s);
    for(i = 0, len = strlen(s); i < len; i++){
        s[i] = lower(s[i]);
    }
    printf("string after:%s\n", s);
    return 0;
}

char lower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    }else{
        return c;
    }
}
