#include <stdio.h>
#include <string.h>

int main(){
    
    return 0;
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
    }
}
