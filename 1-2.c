#include <stdio.h>

enum subject{math, korean, english};

int main(void) {

    enum subject a;

    a = 2;

    printf("영어는 %d번째 과목이다.", a + 1);

    return 0;
}