#include <stdio.h>

#define MAX_LENGTH 15
#define OUT 1
#define IN 0

int main(){
   int words[MAX_LENGTH];
   int i, c, index = 0, w_len = 0, state = IN;
   
   for(i = 0; i < MAX_LENGTH; i++){
       words[i] = 0;
   } 

   while(index <= MAX_LENGTH && ((c = getchar()) != 'Q')){
      if(c == ' ' || c == '\n' || c == '\t'){
          state = OUT;
      }else{
          w_len++;
      }
      if(state == OUT){
          words[index] = w_len;
          index++;
          w_len = 0;
          state = IN;
      }
   }

   for(i = 0; i < MAX_LENGTH; i++){
       printf("index:%d len:%d\n", i, words[i]);
   }

    return 0;
}
