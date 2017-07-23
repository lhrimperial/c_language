#include <stdio.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int c);
void afree(char *p);

int main(){
    char *p = alloc(1000);
    printf("%d\n", p);
    return 0;
}

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
