#include <stdio.h>

int refact(int n){
	int result;
	if(n <= 1){
		result = 1;
	}else {
		result = n * refact(n-1);
	}
	return result;
}
