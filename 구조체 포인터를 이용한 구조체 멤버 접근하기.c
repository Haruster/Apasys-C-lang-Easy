#include <stdio.h>

struct ThreeDime { //구조채 ThreeDime 선언
    double x; //실수형
    double y; //실수형
    double z; //실수형
};

typedef struct ThreeDime ThreeDime; //struct ThreeDime 대신 ThreeDime 사용

int main(void) {
    
    ThreeDime A1 = {3, 1, 8}; // 구조체 변수 A1 초기화
 
    ThreeDime* pA1 = &A1; // 구조체 포인터 선언과 초기화

    printf("3차원 점 A1의 x : %.2lf, y : %.2lf, z : %.2lf이다.\n", pA1->x, pA1->y, pA1->z);

    return 0;

}