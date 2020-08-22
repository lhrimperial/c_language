#include <stdio.h>

typedef unsigned char *byte_pointer;
void show_tytes(byte_pointer,int);
void show_int(int);
void show_float(float);
void show_pointer(void *);

void show_tytes(byte_pointer start, int len){
	int i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
}

void show_int(int x){
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x){
	show_bytes((byte_pointer)&x, sizeof(void *));
}

int main(){
	int _i = 1;
	show_int(_i);
	float _f = 1.0;
	show_float(_f);
	
}
