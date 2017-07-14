#include <stdio.h>
#include <string.h>

int convert_hex_char_int(char s[]);
int get_hex_value(char c);

int main(){
    char hex_char[] = "0x1f";
    printf("%s value is %d\n", hex_char, convert_hex_char_int(hex_char));
    return 0;
}

int convert_hex_char_int(char s[]){
    int i, len,n = 0;
    for(i = 0, len = strlen(s); i < len; i++){
        if(len > 0 && i < 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
            continue;
        }else{
            n =  16 * n + get_hex_value(s[i]);
        }
    }
    return n;
}

int get_hex_value(char c){
  int value = 0;
  if(c >= 'a' && c <= 'f'){
      value = c -'a' + 10;
  }else if(c >= 'A' && c <= 'F'){
      value = c - 'A' + 10;
  }else{
      value = c - '0';
  }
  return value;
}
