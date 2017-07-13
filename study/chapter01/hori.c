#include <stdio.h>

#define MAX_LENGTH 15
#define OUT 1
#define IN 0

int main(){
   int word_len[MAX_LENGTH];
   int i, c, state = OUT, w_len = 0;
   
   for(i = 0; i < MAX_LENGTH; i++){
       word_len[i] = 0;
   } 

   while((c = getchar()) != 'Q'){
      if(c == ' ' || c == '\n' || c == '\t'){
          state = OUT;
      } 
   }

    return 0;
}
