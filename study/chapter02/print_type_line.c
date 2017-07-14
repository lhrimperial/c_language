#include <stdio.h>
#include <limits.h>

int main(){
    printf("sizeof(char):%d\n", sizeof(char));
    printf("range of signed char is %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("range of unsigned char is 0 to %d\n", UCHAR_MAX);

    printf("sizeof(short):%d\n", sizeof(short));
    printf("range of signed short is %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("range of unsigned short is 0 to %d\n",USHRT_MAX);

    printf("sizeof(int):%d\n", sizeof(int));
    printf("range of signed int is %d to %d\n", INT_MIN, INT_MAX);
    printf("range of unsigned int is 0 to %d\n",UINT_MAX);

    printf("sizeof(long):%d\n", sizeof(long));
    printf("range of signed long is %d to %d\n", LONG_MIN, LONG_MAX);
    printf("range of unsigned long is 0 to %d\n",ULONG_MAX);
    return 0;
}
