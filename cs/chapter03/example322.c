#include <stdio.h>

int sum(int,int);

int accum = 0;

int sum(int x, int y){
	int t = x + y;
	accum += t;
	return t;
}

int main(){
	int result = 0;
	result = sum(1,2);
	printf("result=%d,accum=%d\n",result,accum);
	
}
