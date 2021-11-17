// 인자 전달 방법

#include <stdio.h>

void CountIncrement1(int n); // 값을 전달
void CountIncrement2(int* n); // 주소를 전달

int main(void) {

    int a = 10;

    printf("a의 초깃값 : %d\n", a);

    CountIncrement1(a);
    printf("CountIncrement1 함수 실행 후 a의 값 : %d\n", a);

    CountIncrement2(&a);
    printf("CountIncrement2 함수 실행 후 a의 값 : %d\n", a);

    return 0;

}

void CountIncrement1(int n) {

    n++;

}

void CountIncrement2(int* n) {

    (*n)++;

}