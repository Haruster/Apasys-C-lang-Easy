01) 다음 프로그램의 오류를 수정하시오
1.
    #include <stdio.h>

    struct cad {

        int x;
        int y;

    }

    int main(void) {
        
        struct cad num {3.0, 4.3};;

        printf("num의 x좌표 : y좌표 : ", num.x, num.y);

        return 0;

    }

->

    #include <stdio.h>

    struct cad {

        double x;
        double y;

    };

    int main(void) {
        
        struct cad num = {3.0, 4.3};

        printf("num의 x좌표 : %.2lf , y좌표 : %.2lf \n", num.x, num.y);

        return 0;

    }


2.

#include <stdio.h>

enum subject {math, korean, english} ;

int main(void) {
    
    enum subject math = a;

    a = 2; 
    
    
    printf("영어는 %d번째 과목이다.", math + 1);
    
}

->

#include <stdio.h>

enum subject {math, korean, english} ;

int main(void) {
    
    enum subject math = 2;
    
    
    printf("영어는 %d번째 과목이다.", math + 1);
    
}

->
#include <stdio.h>

int main(void) {
    
    enum subject{math, korean, english = 3}; //math = 1, korean = 2, english = 3
    
    printf("영어는 %d번째 과목이다.", english);
    
}

