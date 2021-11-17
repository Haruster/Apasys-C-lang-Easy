// &&(AND) : 둘다 참이여야 참을 반환
// ||(OR) : 둘 중 하나만 참이여도 참을 반환
// !(NOT) : 참이면 거짓, 거짓이면 참을 반환

#include <stdio.h>

int main(void) {

    int x = 50, y = 30;

    printf("x가 y보다 크고 y는 40미만인가요? => %d \n", (x > y) && (x < 40));
    printf("x가 y보다 크거나 혹은 y가 30입니까? => %d \n", (x > y) || (y == 30));
    printf("x는 50이 아닙니까? => %d \n", x != 50); 

    return 0;

}