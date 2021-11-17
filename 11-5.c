#include <stdio.h>
#include <math.h> //sqrt를 사용하기 위한 전처리기

struct ThreeDime {
    double x; // 실수형
    double y; // 실수형
    double z; // 실수형
};

typedef struct ThreeDime ThreeDime; //struct ThreeDime 대신 ThreeDime 사용

int main(void) {

    double D1, D2; //실수형 변수 D1, D2 선언
    
    ThreeDime A1, A2; //구조체 변수 A1, A2 선언

    printf("3차원 점 A1의 x, y, z 좌표를 입력하세요. \n");
    scanf("%lf %lf %lf", &A1.x, &A1.y, &A1.z);

    printf("3차원 점 A2의 x, y, z 좌표를 입력하세요. \n");
    scanf("%lf %lf %lf", &A2.x, &A2.y, &A2.z);

    // D1 : 점 A1과 원점의 거리
    D1 = sqrt(A1.x * A1.x + A1.y * A1.y + A1.z * A1.z);

    //D2 : 점 A1과 점 A2의 거리
    D2 = sqrt((A1.x - A2.x) * (A1.x - A2.x) + (A1.y - A2.y) * (A1.y - A2.y) + (A1.z - A2.z) * (A1.z - A2.z));

    printf("\n점 A1과 원점의 거리는 %.2lf이다.\n\n", D1);
    printf("점 A1과 점 A2의 거리는 %.2lf이다. \n", D2);

    return 0;


}