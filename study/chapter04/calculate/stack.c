#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double d){
   if(sp < MAXVAL){
       val[sp++] = d;
   }else{
       printf("error: stack full, can't push %g any more.\n", d);
   }
}

double pop(void){
    if(sp > 0){
        return val[--sp];
    }else{
        printf("error: stack empty.\n");
        return 0.0;
    }
}
