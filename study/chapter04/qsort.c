#include <stdio.h>

void swap(int v[], int i, int j);
void qsort(int v[], int left, int right);

int main(){
    int i;
    int v[] = {12,34,1,2,5,23,56,6,7,0,3 } ;
    for(i = 0; i < 10; i++){
        printf("%d\t", v[i]);
    }
    qsort(v, 0, 10);
    printf("\n");
    for(i = 0; i < 10; i++){
        printf("%d\t", v[i]);
    }
    printf("\n");
    return 0;
}

void qsort(int v[], int left, int right){
    int i, last;
    if(left > right){
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for(i = left + 1; i <= right; i++){
        if(v[i] < v[left]){
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[i] = temp;
}

