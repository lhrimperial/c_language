#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
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

void qsort(char *v[], int left, int right){
    int i, last;
    void swap(char *v[], int i, int j);

    if(left >= right){
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for(i = left + i; i <= right; i++){
        if(strcmp(v[i], v[left]) < 0){
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v,last + 1, right);
}

void swap(char *v[], int i, int j){
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void writelines(char *lineptr[], int nlines){
    int i;
    for(i = 0; i < nlines; i++){
        printf("%s\n", lineptr[i]);
    }
}

#define MAXLEN 1000

int getlines(char s[], int max);
char *alloc(int n);

int readlines(char *lineptr[], int maxlines){
    int len, nlines = 0;
    char *p, line[MAXLEN];

    while((len = getlines(line, MAXLEN)) > 0){
        if(nlines >= maxlines || (p = alloc(len)) == 0){
            return -1;
        }else{
            line[len -1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

int getlines(char line[], int maxlen){
    int c, len;
    for(len = 0; len < maxlen && (c = getchar()) != 'Q' && c != '\n'; len++){
        line[len] = c;
    }
    if(c == '\n'){
        line[len++] = c;
    }
    line[len] = '\0';
    return len;
}


#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp -n;
    }else{
        return 0;
    }
}

void afree(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE){
        allocp = p;
    }
}
