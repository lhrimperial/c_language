#include <stdio.h>

int strindex(char s[], char t[]);

int main(){
    char s[] = "abcdafdabcdlaskgjjabclkjo"   ;
    char t[] = "abc";
    printf("%d\n", strindex(s,t));
    return 0;
}

int strindex(char s[], char t[]){
    int i, j, k;
    int result = -1;
    for(i = 0; s[i] != '\0'; i++){
        for(j = i,k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++){
            
        }
        if(k > 0 && t[k] == '\0'){
            result = i;       
        }
    }
    return result;
}
