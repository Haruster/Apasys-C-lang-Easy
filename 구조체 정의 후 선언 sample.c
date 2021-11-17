#include <stdio.h>

struct people { //people라는 구조체 정의 (people은 변수가 아니라 키워드이다.)
    char name[20]; // 문자 배열형 멤버
    char address[20]; // 문자 배열형 멤버
    char tel[15]; // 문자 배열형 멤버

    int age; // 정수형 멤버
};

int main() {
    struct people pe1; //구조체 변수 pe1 선언 (struct와 구조체 키워드는 한쌍이다.) 
    struct people pe2; //구조체 변수 pe2 선언 (struct와 구조체 키워드는 한쌍이다.)

    // 생략

    return 0;
}