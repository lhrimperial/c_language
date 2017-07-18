#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]);

int main(){
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "bjst";
    printf("before:%s\n", s1);
    squeeze(s1, s2);
    printf("after:%s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[]){
    int i, j, len1, len2, index = 0;
    for(i = 0, len1 = strlen(s1); i < len1; i++){
        for(j = 0, len2 = strlen(s2); j < len2; j++){
            if(s1[i] != '\0' && s1[i] == s2[j]){
                index = i;
                while(s1[index] != '\0'){
                    s1[index] = s1[index + 1];
                    index++;
                }           
                s1[index] = '\0';     
                len1 = strlen(s1);
            }
        }
    }
}


