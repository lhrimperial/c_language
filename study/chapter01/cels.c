#include <stdio.h>

int main(){
    float cels = 0;
    float fah = 0;
    printf("---------------华氏度转化为摄氏度---------------------\n");
    for(;fah <=300; fah = fah + 20){
        cels = 5 * (fah -32) / 9;
        printf("%3.0f   %6.1f\n", fah, cels);
    }
    return 0;
}
