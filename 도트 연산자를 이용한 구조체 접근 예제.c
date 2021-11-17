#include <stdio.h>

struct list { //list라는 이름을 가진 구조체를 선언한다.
    char name; //문자형
    int age; //문자형
};

int main(void) {
    struct list st1, st2; //구조체 변수 st1, st2를 선언한다.

    st1.name = 'T'; // st1 구조체 변수에 멤버를 지정한다.
    st1.age = 20; // st1 구조체 변수에 멤버를 지정한다.

    st2.name = 'X'; // st2 구조체 변수에 멤버를 지정한다.
    st2.age = 22; // st2 구조체 변수에 멤버를 지정한다.

    printf("이름 나이");
    printf("---------------------------\n");
    printf("%c %d\n", st1.name, st1.age); // st1 구조체 변수 멤버를 출력한다.
    printf("%c %d\n", st2.name, st2.age); // st2 구조체 변수 멤버를 출력한다.
}