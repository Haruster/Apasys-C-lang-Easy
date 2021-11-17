#include <stdio.h>

struct people // people라는 구조체를 정의한다. (people은 변수가 아니라 키워드이다.)
{
    char name[20]; // 문자 배열형 멤버
    char address[20]; //문자 배열형 멤버
    char tel[20]; //문자 배열형 멤버

    int age; // 정수형 멤버
};

int main(void) {
    struct people pe1; //구조체 변수 pe1 선언 (struct와 구조체 키워드는 한쌍이다.) 
    //(pe1변수가 차지하는 메모리 크기는 20(배열)바이트 + 20(배열)뱌이트 + 20(배열)바이트 + 4(int형 변수)바이트)이므로 64바이트이다.
    struct people pe2; //구조체 변수 pe2 선언 (struct와 구조체 키워드는 한쌍이다.)
    //(pe2뱐수가 차지하는 메모리 크기는 20(배열)바이트 + 20(배열)바이트 + 20(배열)바이트 + 4(int형 변수)바이트)이므로 64바이트이다.
    //생략

    return 0;
}