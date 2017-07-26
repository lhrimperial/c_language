#include <stdio.h>

int main(int argc, char *argv[]){
    printf("%c  %c\n", *++argv[0], (*++argv)[0]);
}
