#include <stdio.h>

int main(void) {

    float x = 1234.1234;

    printf("실수형 변수 x의 메모리 크기는 %d입니다.\n", sizeof(x));

    return 0;

}

// 메모리의 크기는 정수형이기 때문에 %d를 이용해서 출력한다.