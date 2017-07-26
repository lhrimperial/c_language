#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getlines(char *line, int max);

int main(int argc, char *argv[]){
    char line[MAXLINE];
    int found = 0;
    if(argc != 2){
        printf("Usage: find pattern.\n");
    }else{
        while(getlines(line, MAXLINE) > 0){
            if(strstr(line, argv[1]) != NULL){
                printf("%s", line);
                found++;
            }
        }
        printf("found %d time\n", found);
    }
    return 0;
}

int getlines(char *line, int max){
    int c;
    char *p = line;
    while((line - p) < max && (c = getchar()) != 'Q' && c != '\n'){
        *line++ = c;
    }
    if(c == '\n'){
        *line++ = '\n';
    }
    *line = '\0';
    return line - p;
}
