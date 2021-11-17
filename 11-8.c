#include <stdio.h>
#include <math.h>

struct ThreeDime {
    double x; //실수형
    double y; //실수형
    double z; //실수형

};

typedef struct ThreeDime ThreeDime; //struct ThreeDime 대신 ThreeDime 사용

//3차원상의 한 점과 원점의 거리를 구하는 함수
double Distance1(struct ThreeDime* a) {
        
    double d;

    d = sqrt(a->x * a -> x + a->y * a->y + a->z * a->z);

    return d;

}

//3차원상의 두 점 간 거리를 구하는 함수
double Distance2(struct ThreeDime* a, struct ThreeDime* b) {

   double d;

    d = sqrt((a->x-b->x) * (a->x-b->x) + (a->y-b->y) * (a->y-b->y) + (a->z-b->z) * (a->z-b->z));

    return d;

}

//3차원상의 한 점을 원점에 대칭시킨 점을 구하는 함수
struct ThreeDime SymOri(struct ThreeDime* a) {
        
    a->x = -a->x;
    a->y = -a->y;
    a->z = -a->z;

    return *a;
}

int main(void) {
    double D1, D2; //double형 변수 D1, D2선언
    ThreeDime A1, A2, A3; //구조체 변수 A1, A2, A3 선언

    printf("3차원 점 A1의 x, y, z 좌표를 입력하시오.\n");
    scanf("%lf %lf %lf", &A1.x, &A1.y, &A1.z);

    printf("3차원 점 A2의 x, y, z 좌표를 입력하시오.\n");
    scanf("%lf %lf %lf", &A2.x, &A2.y, &A2.z);

    // D1 : 점 A1과 원점의 거리
    D1 = Distance1(&A1);

    //D2 : 점 A1과 점 A2의 거리
    D2 = Distance2(&A1, &A2);

    // 점 A1을 원점에 대칭시킨 점
    A3 = SymOri(&A1);

    printf("\n점 A1과 원점의 거리는 %.2lf이다.\n", D1);
    printf("점 A1과 점 A2의 거리는 %.2lf이다.\n", D2);

    printf("점 A1을 원점에 대칭시킨 점의 x : %.2lf, y : %.2lf, z : %.2lf이다.\n", A3.x, A3.y, A3.z);

    return 0;

}
