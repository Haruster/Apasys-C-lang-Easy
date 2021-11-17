#include <stdio.h>

struct peoples { //peoples라는 구조체를 정의(생성)한다.
    char name[20]; //문자형
    char address[30]; //문자형
    int age; //정수형
};

typedef struct peoples people; //구조체를 재정의한다. (struct peoples -> people)

int main(void) {
    people pe1 = {"Moon", "Seoul", 25}; //구조체 변수 st1 초기화
    struct peoples pe2 = {"Nephael", "jj", 20}; //구조체 변수 st2 초기화

    printf("이름이 %s이고 %s 출신이고 %d세입니다.\n", pe1.name, pe1.address, pe1.age); //구조체 변수 st1 출력

    printf("이름이 %s이고 %s 출신이고 %d세입니다.\n", pe2.name, pe2.address, pe2.age); //구조체 변수 st2 출력

    return 0;
}