#include <stdio.h>

int q(int);
int p(int);

int q(int y){
	return y*2;
}

int p(int x){
	int y = x*x;
	int z = q(y);
	return y + z;
}

int main(){
	int result = p(2);
	printf("result=%d\n",result);

}
