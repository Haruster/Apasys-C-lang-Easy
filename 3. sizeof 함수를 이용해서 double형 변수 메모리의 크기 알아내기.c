#include <stdio.h>

int main(void) {

    double z;

    printf("실수형 변수 z의 메모리의 크기는 %d입니다.\n", sizeof(z));

    return 0;

}

// 메모리의 크기는 정수형이기 때문에 %d를 이용해서 출력한다.