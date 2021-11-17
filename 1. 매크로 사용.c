#include <stdio.h>

#define PI 3.14

int main(void) {

    int R;

    float cir;

    printf("원의 반지름을 입력하세요 : ");

    scanf("%d", &R);

    cir = PI * (2 * R);

    printf("원의 둘레는 %.2f입니다. \n", cir);

    return 0;

}