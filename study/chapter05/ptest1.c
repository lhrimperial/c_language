#include <stdio.h>

int main(int argc, char *argv[]){
//  printf("%c\n", *++argv[0]);
  printf("%c\n", (*++argv)[0]);
  printf("%c\n", *++argv[0]);
   // printf("%c %c\n", *++argv[0], (*++argv)[0]);
}
