#include <stdio.h>
#include <string.h>

int convert_hex_char_int(char s[]);
int get_hex_value(char c);

int main(){
    char hex_char[] = "0x0f";
    printf("%s value is %d\n", hex_char, convert_hex_char_int(hex_char));
    return 0;
}

int convert_hex_char_int(char s[]){
    int i, len,n = 0;
    for(i = 0, len = strlen(s); i < len; i++){
        if(len > 0 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
            continue;
        }else{
            n += 16 * get_hex_value(s[i]);
        }
    }
    return n;
}

int get_hex_value(char c){
    int value = 0;
    switch(c){
        case 'a':
        case 'A':
            value = 10;
            break;
        case 'b':
        case 'B':
            value = 11;
            break;
        case 'c':
        case 'C':
            value = 12;
            break;
        case 'd':
        case 'D':
            value = 13;
            break;
        case 'e':
        case 'E':
            value = 14;
            break;
        case 'f':
        case 'F':
            value = 15;
            break;
        defualt:
            value = c;
    }
    return value;
}
