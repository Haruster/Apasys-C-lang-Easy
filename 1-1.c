#include <stdio.h>

struct cad {
    double x;
    double y;
};

typedef struct cad cad;

int main(void) {
    
    cad num = {3.0, 4.3};;

    printf("num의 x좌표 : %.1f y좌표 : %.1f \n", num.x, num.y);

    return 0;

}