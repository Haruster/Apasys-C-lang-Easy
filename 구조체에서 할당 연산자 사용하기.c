#include <stdio.h>

struct list { //list라는 이름을 가진 구조체를 선언한다.
    char name; //문자형
    char gender; //문자형
    int age; //정수형
};

int main(void) {
    struct list st1 = {'T', 'M', 25}; //구조체 변수 st1 초기화
    struct list st2, st3 = {'P', 'F', 30}; //구조체 변수 st3초기화 및 st2선언(st2의 값은 초기화 되어 있지 않음)

    st2 = st1; //st1이라는 구조체 변수를 st2에 대입한다.
    st3.name = st1.name; //st1.name을 st3.name에 대입한다.
    st3.gender = st1.gender; //st1.gender을 st3.gender에 대입한다.

    printf("이름 성별 나이\n");

    printf("-------------------------\n");

    printf("st1 %c %c %d\n", st1.name, st1.gender, st1.age); //st1 구조체 변수를 출력한다.
    printf("st2 %c %c %d\n", st2.name, st2.gender, st2.age); //st2 구조체 변수를 출력한다.
    printf("st3 %c %c %d\n", st3.name, st3.gender, st3.age); //st3 구조체 변수를 출력한다.

    return 0;

}