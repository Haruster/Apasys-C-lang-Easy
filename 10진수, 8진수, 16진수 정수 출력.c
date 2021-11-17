#include <stdio.h>

int main(void) {
    
    int x = 10; // 정수형 변수 x에 10이라는 값을 저장한다.
    int y = 12; // 정수형 변수 y에 12라는 값을 저장한다.
    int z = 0xA; // 정수형 변수 z에 0xA라는 값을 저장한다. (a는 16진수로 10을 의미한다.)

    printf("%d, %o, %x\n", x, y, z);

    return 0;
}