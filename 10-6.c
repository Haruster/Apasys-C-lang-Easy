#include <stdio.h>

int main(void) {

    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;

    printf("배열명 a를 이용한 주소 표현 \n");

    for (i = 0; i < 5; i++) 

        printf("a[%d]의 주소 %p\n", i, a + 1);

    printf("\n 포인터 p를 이용한 주소 표현\n");

    for (i = 0; i < 5; i++) 

        printf("a[%d]의 주소 %p\n", i, p + i);

    printf("\n 포인터 p를 이용한 배열 값 표현\n");

    for (i = 0; i < 5; i++) 

        printf("a[%d] = %d\n", i, *(p + i));

    return 0;

}