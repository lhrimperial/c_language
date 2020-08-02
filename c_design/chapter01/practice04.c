#include <stdio.h>

/*当fahr=0，20，……，300时，分别打印华氏温度与摄氏温度对照表*/
int main(){
	float fahr,celsius;
	float lower,upper,step;
	lower = 0;	/* 温度表的下限*/
	upper = 300;	/* 温度表的上限*/
	step = 20;	/* 步长*/

	celsius = lower;
	printf("摄氏温度与华氏温度对照表\n");
	while(celsius <= upper){
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n",celsius,fahr);
		celsius += step;
	}
}
