#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100

int getch(void);
void ungetch(int c);
int getint(int *pn);

int main(){
   int num;
   getint(&num) ;
   printf("input num is %d\n", num);

    return 0;
}

int getint(int *pn){
    int c, sign;
    while(isspace(c = getch())){
        
    }
    if(!isdigit(c) && c != 'Q' && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if(c == '+' || c == '-'){
        c = getch();
    }
    for(*pn = 0; isdigit(c); c = getch()){
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if(c != 'Q'){
        ungetch(c);
    }
    return c;
}

char buf[BUFSIZE];
int bufp = 0;

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp >= BUFSIZE){
        printf("ungetch: too many characters\n");
    }else{
        buf[bufp++] = c;
    }
}
