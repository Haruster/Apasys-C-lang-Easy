#include <stdio.h>

int main(void) {

    int a[] = {11, 22, 33, 44, 55};

    int *p = a;

    printf("*p의 값 = %p\n", p);
    p++;

    printf("*(p+1)의 값 = %d\n", *p);
    p++;

    printf("*(p+2)의 값 = %d\n", *p);
    p--;

    printf("*(p+1)의 값 = %d\n", *p);

    return 0;

}