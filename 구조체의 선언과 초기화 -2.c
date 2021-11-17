// (구조채의 선언과 동시에 초기화를 한다.)
#include <stdio.h>

struct people { // people이라는 이름을 가진 구조체를 정의한다.
    char name[20]; //1차원 배열(20개의 문자 저장 가능)
    char address[30]; //1차원 배열(30개의 문자 저장 가능)
    int age;
} st1 = {"Moon", "Seoul", 28}; //구조체 초기화


