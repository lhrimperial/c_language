#include <stdio.h>

void another(char *s);

void update(int *i){
    *i = 19;
}

int main(){
    int a = 10;
    printf("brfor:%d\n", a);
    update(&a);
    printf("after:%d\n", a);
    char s[] = "hello ";
    printf("%s\n", s);
    another(s);\
    printf("%s\n", s);
    return 0;
}

void another(char *s){
    char c[] = "world.";
    s = c;
    *s = 'b';
    printf("another: %s\n", s);
}
