//pow()함수를 사용하여 지수 출력

#include <stdio.h>
#include <math.h> //pow()함수를 사용하기 위한 전처리기

int main(void) {
    short num1, num2; //정수형은 int, long, short가 있으며 값에 따라 다르게 쓰임.
    
    num1 = pow(20, 2); //20^2를 계산
    num2 = pow(30, 3); // 30 ^ 3를 계산
    
    printf("num1은 %d이며 num2는 %d이다. \n", num1, num2);
    
    return 0;
    
}
