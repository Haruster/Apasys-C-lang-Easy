#include <stdio.h>

enum subject {math, korean, english} ;

int main(void) {
    
    enum subject math = 2;
    
    
    printf("영어는 %d번째 과목이다.", math + 1);
    
}

