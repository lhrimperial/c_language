#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

int main(){
    int nlines;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort(lineptr, 0, nlines);
        writelines(lineptr, nlines);
        return 0;
    }else{
        printf("error: input too big to sort.\n");
        return 1;
    }
    return 0;
}

#define MAXLEN 1000

int getline(char *s, int max);
char *alloc(int n);

int readlines(char *lineptr[], int maxlines){
    int len, nlines = 0;
    char *p, line[MAXLEN];

    while((len = getline(line, MAXLEN)) > 0){
        if(nlines >= maxlines || p = alloc(len) == NULL){
            return -1;
        }else{
            line[len -1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}


