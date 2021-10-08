//pow()함수를 사용하여 지수 출력

#include <stdio.h>
#include <math.h>

int main(void) {
    short a, b; //정수형은 int, long, short 등으로 출력할 수 있고 값마다 다름
    
    a = pow(2, 15); //2^15을 계산
    b = pow(3, 20); //3^20을 계산
    
    printf("a의 값은 %d이다. \n", a);
    printf("b의 값은 %d이다. \n", b);
    
    return 0;
    
}
