// 관계 연산자에서 True는 1, false는 0을 반환한다.

#include <stdio.h>

int main(void) {

    int x = 50, y = 100;

    printf("x가 y보다 큰가? => %d \n", x > y);
    printf("x가 y보다 크거나 같은가? => %d \n", x >= y);
    printf("x가 y보다 작은가? => %d \n", x < y);
    printf("x가 y보다 작거나 같은가? => %d \n", x <= y);
    printf("x와 y가 같은가? => %d\n", x == y);

    return 0;

}

// 관계 연산 값이 맞으면 1 틀리면 0을 반환