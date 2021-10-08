#include <stdio.h>

int main(void) {
    
    int num1 = 5, num2 = 10;
    
    printf("num1의 초깃값은 %d입니다. \n", num1);
    printf("num2의 초깃값은 %d입니다. \n", num2);
    
    //변수값 재정의
    num1 = 30;
    num2 = 40;
    
    printf("재정의한 num1의 값은 %d입니다. \n", num1);
    printf("재정의한 num2의 값은 %d입니다. \n", num2);
    
    return 0;
    
}
