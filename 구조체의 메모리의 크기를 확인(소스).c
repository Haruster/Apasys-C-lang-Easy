#include <stdio.h>

struct list { //list라는 구조체를 정의한다. (list는 변수가 아니라 키워드이다.)
    char name; // 문자 배열형 멤버 (1바이트)
    int age; // 정수형 멤버 (4바이트)
};

int main(void) {
    struct list st1 = {'Apasys', 20}; 

    printf("구조체 list의 크기는 %d이다. \n", sizeof(struct list));
    printf("구조체 객체 st1의 크기는 %d이다. \n", sizeof(st1));

    return 0;
}