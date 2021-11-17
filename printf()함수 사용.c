#include <stdio.h>

int main(void) {

    printf("서식이 있는 것을 출력합니다. \n"); // \n : 한 줄 건너뛰기

    printf("%d\n", 1000); //1000을 출력한다.
    
    printf("%d %d %d\n", 1, 2, 3); //1 2 3을 출력한다.

    printf("%s\n", "나는 문자열 입니다."); //문자열 "나는 문자열입니다."를 출력한다.

    return 0; //종료값을 반환한다.

}