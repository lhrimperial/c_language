#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(void *lineptr[], int left, int right, int(*comp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char *argv[]){
    int nlines;
    int numeric = 1;
    if(argc > 1 && strcmp(argv[1], "-1") == 0){
        numeric = 1;
    }
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort((void**) lineptr, 0, nlines - 1, (int (*)(void*,void*)) (numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
    }else{
        printf("intput too big to sort.\n");
        return 1;
    }
    return 0;
}

void qsort(void *v[], int left, int right, int (*comp)(void *, void *)){
    
}

