#include <stdio.h>

#define PI 3.14
#define AREA(X) (PI * (X * (X))

int main(void) {

    float R;

    printf("원의 반지름을 입력하세요 : ");

    scanf("%f", &R);

    printf("원의 면적은 %.2f입니다. \n", AREA(R));

    return 0;

}