// 포인터를 이용하여 두 수 바꾸기

#include <stdio.h>

void Swap(int* a, int* b);

int main(void) {

    int x = 10, y = 5;

    printf("Swap() 함수 실행 전\n");
    printf("x = %d, y = %d이다.\n\n", x, y);

    Swap(&x, &y);

    printf("Swap() 함수 실행 후\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;

}

void Swap(int* a, int* b) {

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}