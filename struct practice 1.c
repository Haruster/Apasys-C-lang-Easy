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
