#include <stdio.h>

#define MAXLINE 100

int my_getline(char arr[], int lim);
void copy_char_arr(char to[], char from[]);

int main(){
    int len; /* current line length*/
    int max; /* maximum length seen so for */
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = my_getline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy_char_arr(longest, line);
        }
    }
    if(max > 0){
        printf("%s", longest);
    }

    return 0;
}

int my_getline(char arr[], int lim){
    int c, i;
    for(i =  0; i < lim - 1 && (c = getchar()) != 'Q' && c != '\n'; i++){
        arr[i] = c;
    }
    if(c == '\n'){
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    return i;
}

void copy_char_arr(char to[], char from[]){
    int index = 0;
    while((to[index] = from[index]) != '\0'){
        index++;
    }
}
