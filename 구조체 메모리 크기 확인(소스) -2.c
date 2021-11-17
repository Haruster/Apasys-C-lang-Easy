#include <stdio.h>

struct list { //
    char name; //문자형 멤버 (1바이트)
    char gender; //문자형 멤버 (1바이트)
    
    int age; //정수형 멤버 (4바이트)
};

int main(void) {
    struct list st1 = {'T', 'M', 25};

    printf("구조체 list의 크기는 %d이다. \n", sizeof(struct list));
    printf("구조체 객체 st1의 크기는 %d이다. \n", sizeof(st1));

    return 0;
}

//sizeof() 괄호안에 올 수 있는 것 
// 1. 자료형, 2. 변수이다.