#include <stdio.h>

int main(){
    float cels = 0;
    float fahr = 0;
    float lower = 0, hight = 300, step = 20;
    printf("------------------摄氏度转化为华氏度--------------------------\n");
    while(cels < hight){
        fahr = cels * 9 / 5 + 32;
        printf("%3.0f   %6.1f\n", cels, fahr);
        cels = cels + step;
    }
    return 0;
}
